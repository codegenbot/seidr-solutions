```cpp
#include <iostream>
#include <vector>

bool issame(const std::vector<std::variant<int>> &a, const std::vector<std::variant<int>> &b) {
    auto a_integers = filter_integers(a);
    auto b_integers = filter_integers(b);

    return a_integers == b_integers;
}

std::vector<int> filter_integers(const std::vector<std::variant<int>>& vec) {
    std::vector<int> result;
    for (auto i : vec) {
        if (std::holds_alternative<int>(i)) {
            result.push_back(std::get<int>(i));
        }
    }
    return result;
}

int main() {
    std::vector<std::variant<int>> a = {1, 2, 3};
    std::vector<std::variant<int>> b = {1, 4, 3};

    assert(issame(a, b));

    return 0;
}