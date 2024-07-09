```cpp
#include <iostream>
#include <vector>
#include <variant>
#include <algorithm>

bool issame(const std::variant<int>& v1, const std::variant<int>& v2) {
    if (v1.index() != v2.index()) return false;
    if (v1.index() == 0) return std::get<int>(v1) == std::get<int>(v2);
    return false;
}

std::vector<int> filter_integers(initializer_list<std::variant<int>> values) {
    std::vector<int> result; 
    for (const auto& value : values) {
        try {
            int val = std::get<int>(value);
            if(std::find(result.begin(), result.end(), val) == result.end())
                result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

std::vector<std::variant<int>> values = {3, 3, 3};
std::vector<int> result = filter_integers(values);
assert (std::equal(result.begin(), result.end(), std::vector<int>({3, 3, 3}).begin()));
return 0;