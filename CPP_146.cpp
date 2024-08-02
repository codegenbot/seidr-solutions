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
    for (int i = 0; i < 5; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }
    int result = specialFilter(nums);
    std::cout << "The count of numbers that meet the condition is: " << result << std::endl;
    return 0;
}