#include <algorithm>
#include <vector>
#include <boost/any.hpp>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(list_any values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value) != 0) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}