#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            int integer = boost::any_cast<int>(value);
            bool same = false;
            for (int i : result) {
                if (issame({i}, {integer})) {
                    same = true;
                    break;
                }
            }
            if (!same) {
                result.push_back(integer);
            }
        }
    }
    return result;
}