#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

bool issame(const boost::any& a, const boost::any& b) {
    if (!a.type() || !b.type()) {
        return false;
    }
    return issame(boost::any_cast<std::vector<int>>(a), boost::any_cast<std::vector<int>>(b));
}

std::vector<int> filter_integers(const std::list<boost::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int) && boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}