#include <iostream>
#include <vector>
#include <variant>

bool issame(const std::vector<std::variant<int>>& v1, const std::vector<std::variant<int>>& v2) {
    if (v1.size() != v2.size()) return false;
    for (size_t i = 0; i < v1.size(); ++i) {
        if (!std::holds_alternative<int>(v1[i]) || !std::holds_alternative<int>(v2[i])) return false;
        if (std::get<int>(v1[i]) != std::get<int>(v2[i])) return false;
    }
    return true;
}

std::vector<std::variant<int>> filter_integers(const std::vector<std::variant<int>>& values) {
    std::vector<std::variant<int>> result; 
    for (const auto& value : values | std::views::filter([](auto v){return std::holds_alternative<int>(v);}) ) {
        if (std::holds_alternative<int>(value)) { // Check if the variant contains an int
            int val = std::get<int>(value);
            bool found = false;
            for (auto& v : result) {
                if (std::holds_alternative<int>(v) && std::get<int>(v) == val) {
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
    std::vector<std::variant<int>> values = {3, 123, 3, 3, 'a', 'b'};
    std::vector<std::variant<int>> integers = filter_integers({values.begin(), values.end()});
    bool same = issame(integers, {3, 3});
    return 0;
}