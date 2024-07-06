#include <iostream>
#include <vector>
#include <boost/any.hpp>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(list_any values) {
    std::vector<int> result;
    for (auto& value : values) {
        if(boost::any_cast<int>(value) != 0) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}