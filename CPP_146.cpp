```cpp
#include <vector>
#include <iostream>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int x : nums) {
        int num = abs(x);
        if ((num / 10000 > 0 || (num / 100) % 10 > 4) && (num / 1000) % 10 < 3) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {123, 456, -789, 10101, -2222};
    int result = specialFilter(nums);
    std::cout << "The number of filtered integers is: " << result << std::endl;
    return 0;
}