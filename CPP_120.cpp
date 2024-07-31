#include <algorithm>
#include <cassert>
#include <vector>

template <typename T>
T maximum(const std::vector<T>& numbers, const T& value) {
    T max_value = *std::max_element(numbers.begin(), numbers.end());
    return max_value > value ? max_value : value;
}

template <typename T>
bool issame(const std::vector<T>& a, const std::vector<T>& b) {
    return a == b;
}

int main() {
    assert(issame(maximum(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0), std::vector<int>{1, 2, 3, -23, 243, -400, 0}));
    return 0;
}