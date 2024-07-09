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

std::vector<std::variant<int>> filter_integers(initializer_list<std::variant<int>> values) {
    std::vector<std::variant<int>> result; 
    for (const auto& value : values) {
        if (value.index() == 0) { // Check if the variant contains an int
            int val = std::get<int>(value);
            bool found = false;
            for (auto& v : result) {
                if (v.index() == 0 && std::get<int>(v) == val) {
                    found = true;
                    break;
                }
            }
            if (!found)
                result.push_back(value);
        }
    }
    return result;
}

int main() {
    std::vector<std::variant<int>> values = {3, 'c', 3, 3, 'a', 'b'};
    std::vector<std::variant<int>> result = filter_integers(values);
    assert (std::equal(result.begin(), result.end(), std::vector<std::variant<int>>({3, 3, 3}).begin()));
    return 0;
}