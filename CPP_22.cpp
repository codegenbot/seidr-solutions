```cpp
#include <iostream>
#include <vector>
#include <boost/variant.hpp>

using namespace std;

std::vector<int> filter_integers(std::vector<boost::variant<int>> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            result.push_back(get<int>(value));
        }
    }
    return result;

}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}