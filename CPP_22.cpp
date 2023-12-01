#include <vector>
#include <list>
#include <variant>

std::vector<int> filter_integers(const std::list<std::variant<int, char>>& values) {
    std::vector<int> result{};
    for (const auto& value : values) {
        if (std::holds_alternative<int>(value)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({std::variant<int, char>{3}, std::variant<int, char>{'c'}, std::variant<int, char>{3}, std::variant<int, char>{3}, std::variant<int, char>{'a'}, std::variant<int, char>{'b'}}), {3, 3, 3}));
    return 0;
}