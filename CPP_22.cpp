```cpp
#include <cassert>
#include <vector>
#include <initializer_list>
#include <variant>
#include <algorithm>

std::vector<int> filter_integers(std::initializer_list<std::variant<int, char>&> values) {
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

int main() {
    assert(issame(filter_integers({std::variant<int, char>(3), std::variant<int, char>('c'), std::variant<int, char>(3), std::variant<int, char>(3), std::variant<int, char>('a'), std::variant<int, char>('b')}), {3, 3, 3}));

    return 0;
}
```