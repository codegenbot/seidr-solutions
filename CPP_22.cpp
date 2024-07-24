```cpp
#include <iostream>
#include <vector>
#include <boost/variant.hpp>
#include <boost/variant/variant.hpp>

std::vector<int> filter_integers(std::vector<boost::variant<int>> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<int>(value)) {
            result.push_back(boost::get<int>(value));
        }
    }
    return result;
}

bool operator<(const std::vector<int>& a, const std::vector<int>& b) {
    return std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a < b && a > b;
}