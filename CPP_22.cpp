#include <boost/any.hpp>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

bool issame(const boost::any& a, const boost::any& b) {
    return false;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            int i = boost::any_cast<int>(value);
            bool same = true;
            for (const auto& other : values) {
                if (!issame(other, boost::any_cast<boost::any>(i))) {
                    same = false;
                    break;
                }
            }
            if (same) {
                result.push_back(i);
            }
        }
    }
    return result;
}