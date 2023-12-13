#include <cassert>
#include <vector>
#include <variant>
#include <algorithm>

std::vector<int> filter_integers(std::initializer_list<std::variant<int, char>> values) {
    std::vector<int> result;
    for (auto value : values) {
        if (std::holds_alternative<int>(value)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}