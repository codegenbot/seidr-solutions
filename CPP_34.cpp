#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

template <typename T>
std::vector<T> unique(std::vector<T> input) {
    std::sort(input.begin(), input.end());
    input.erase(std::unique(input.begin(), input.end()), input.end());
    return input;
}

template <typename T>
bool issame(const std::vector<T>& vec1, const std::vector<T>& vec2) {
    return vec1 == vec2;
}

int main() {
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}), std::vector<int>({0, 2, 3, 5, 9, 123}));
    return 0;
}