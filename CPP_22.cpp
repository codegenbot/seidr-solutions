#include <iostream>
#include <vector>
#include <variant>

std::vector<int> filter_integers(std::vector<std::variant<int>> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::holds_alternative<int>(value)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;

}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}