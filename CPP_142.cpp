```cpp
#include <vector>
#include <cassert>

int main() {
    std::vector<int> numbers;
    for (int i = 1; i <= 3; ++i) {
        numbers.push_back(i);
    }
    int sum = sum_squares(numbers);
    assert(sum == 14);
}

int sum_squares(std::vector<int> v) {
    int result = 0;
    for (int x : v) {
        result += x * x;
    }
    return result;
}