```cpp
#include <iostream>
#include <vector>
#include <cassert>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        std::cin >> num;
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    int count = specialFilter(std::vector<int>());
    std::cout << "Number of integers in the given list that meet all conditions: " << count << std::endl;
    return 0;
}