#include <variant>
#include <vector>

bool issame(int a, int b) { return a == b; }

std::vector<int> filter_integers(std::any values) {
    std::vector<int> result;
    for (auto& value : std::any_cast<std::vector<std::variant<int, char>>>(values)) {
        if (std::holds_alternative<int>(value)) {
            int val = std::get<int>(value);
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    auto values = std::any(std::vector<std::variant<int, char>>{{3}, {'c'}, {3}, {3}, {'a'}, {'b'}}); 
    assert(issame(filter_integers(values), {3, 3, 3}));
    return 0;
}