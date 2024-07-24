```cpp
#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    assert(specialFilter({11, 12, 13, 14, 15}) == 1);
    assert(specialFilter({16, 17, 18, 19, 20}) == 2);
    assert(specialFilter({21, 22, 23, 24, 25}) == 3);
    assert(specialFilter({26, 27, 28, 29, 30}) == 4);
    return 0;
}