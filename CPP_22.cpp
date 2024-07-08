```cpp
#include <any>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::any values) {
    std::vector<int> result;
    for (auto& value : std::any_cast<std::vector>(values).at(0)) {
        if (std::holds_alternative<int>(value)) {
            int val = std::get<int>(value);
            if (!result.size() || val != result.back()) {
                result.push_back(val);
            }
        }
    }
    return result;
}

int main() {
    auto values = std::any(std::vector({3, (int)'c', 3, 3, (int)'a', (int)'b'}));
    auto output = filter_integers(values);
    assert(issame(output, std::vector<int>({3, 3})));
    return 0;
}