#include <vector>
#include <list>
#include <algorithm>
#include <boost/any.hpp>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

std::vector<boost::any> filter_integers(std::list<boost::any> values) {
    std::vector<boost::any> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value) != 0) {
            result.push_back(value);
        }
    }
    return result;
}