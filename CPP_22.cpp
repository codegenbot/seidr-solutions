#include <any>
#include <vector>

bool issame(std::any a, std::any b) { return (std::any_cast<int>(a) == std::any_cast<int>(b)); }

std::vector<int> filter_integers(std::any values) {
    std::vector<int> result;
    for (auto& value : std::any_cast<std::any>(values)) {
        if (std::holds_alternative<int>(value)) {
            int val = std::get<int>(value);
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    auto values = std::any({3, 50, 3, 3, 1, 2});
    auto output = filter_integers(values);
    assert(issame(std::any(output), std::any({3, 3, 3})));
    return 0;
}