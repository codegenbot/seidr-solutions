#include <algorithm>
#include <cassert>
#include <vector>

template <typename T>
T maximum(const std::vector<T>& numbers, const T& value) {
    return *std::max_element(numbers.begin(), numbers.end());
}

int main() {
    assert(maximum(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0) == 243);
    return 0;
}