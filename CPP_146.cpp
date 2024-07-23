#include <iostream>
#include <vector>

int specialFilter(const std::vector<int>& nums) {
    int count = 0;
    for (const auto& num : nums) {
        if (std::abs(num) > 10 && (num % 10) % 2 != 0 && ((num / 10) % 10) % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums;
    int num;

    while(std::cin >> num) {
        nums.push_back(num);
    }

    if (!nums.empty()) {
        int result = specialFilter(nums);
        std::cout << "Count of numbers that meet the criteria: " << result << std::endl;
    } else {
        std::cout << "No numbers were input." << std::endl;
    }

    return 0;
}