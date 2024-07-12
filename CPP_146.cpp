#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int count;

    std::cout << "Enter the numbers (space separated): ";
    for (std::string num; std::getline(std::cin, num);) {
        nums.push_back(stoi(num));
    }

    count = specialFilter(nums);

    std::cout << "The count of filtered numbers is: " << count << std::endl;

    return 0;
}

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}