#include <iostream>
#include <vector>
#include <variant>
#include <algorithm>

bool issame(const std::vector<std::variant<int>>& v1, const std::vector<std::variant<int>>& v2) {
    if (v1.size() != v2.size()) return false;
    for (size_t i = 0; i < v1.size(); ++i) {
        if (!issame(v1[i], v2[i])) return false;
    }
    return true;
}

std::vector<std::variant<int>> filter_integers(const std::initializer_list<std::variant<int>>& values) {
    std::vector<std::variant<int>> result; 
    for (const auto& value : values) {
        try {
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
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

int main() {
    std::vector<std::variant<int>> values = {3, 123, 3, 3};
    std::vector<std::variant<int>> result;
    for (const auto& value : filter_integers({values})) {
        try {
            if (value.index() == 0) {
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
        } catch (...) {
            // ignore non-integer values
        }
    }
    assert(issame(result, {3, 3, 123}));
    return 0;
}