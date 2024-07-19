```cpp
#include <cassert>

int specialFilter(std::vector<int> nums) {
    int c = 0;
    for (int num : nums) {
        if (std::abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            c++;
        }
    }
    return c; 
}

int main() {
    assert(specialFilter({}) == 0);
    int testResult = specialFilter({1, 11, 21});
    // do something with the result
    return 0;
}