#include <iostream>
#include <vector>
#include <list>
#include <variant>
#include <cassert>

std::vector<int> filter_integers(const std::list<std::variant<int>>& values) {
    std::vector<int> result{};
    for (const auto& value : values) {
        if (std::holds_alternative<int>(value) && !std::holds_alternative<char>(value)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({std::variant<int>{3}, std::variant<int>{'c'}, std::variant<int>{3}, std::variant<int>{3}, std::variant<int>{'a'}, std::variant<int>{'b'}}), {3, 3, 3}));
    return 0;
}