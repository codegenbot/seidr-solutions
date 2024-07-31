#include <algorithm>
#include <cassert>
#include <vector>

template <typename T>
T maximum(const std::vector<T>& numbers, const T& value) {
    T max_num = *std::max_element(numbers.begin(), numbers.end());
    return (max_num == value) ? value : max_num;
}

int main() {
    assert(maximum(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0) == 243);
    return 0;
}