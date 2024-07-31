#include <algorithm>
#include <cassert>
#include <vector>

template <typename T>
bool issame(const std::vector<T>& a, const std::vector<T>& b) {
    return a == b;
}

template <typename T>
T maximum(const std::vector<T>& numbers, const T& value) {
    return *std::max_element(numbers.begin(), numbers.end());
}

int main() {
    assert(issame(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, std::vector<int>{1, 2, 3, -23, 243, -400, 0}));
    return 0;
}