```cpp
#include <vector>
#include <cassert>

int main() {
    std::vector<int> numbers = {1, 2, 3};
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