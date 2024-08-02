```cpp
#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10 % 10) % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums;
    // Read input from user
    for (int i = 0; i < 5; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }
    int result = specialFilter(nums);
    std::cout << "The number of special numbers is: " << result << std::endl;
    return 0;
}