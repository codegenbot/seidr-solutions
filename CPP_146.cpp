```cpp
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> nums;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        while (true) {
            std::cout << "Enter element " << i + 1 << ": ";
            if (!(std::cin >> nums[i])) {
                std::cerr << "Invalid input! Please enter a number.\n";
                std::cin.clear();
                std::cin.ignore(INT_MAX, '\n');
            } else {
                break;
            }
        }
    }
    std::cout << "Number of special numbers: " << specialFilter(nums) << std::endl;
}

int specialFilter(std::vector<std::string> nums) {
    int count = 0;
    for (const auto& num : nums) {
        if (stoi(num) > 10 && (stoi(num) % 10) % 2 != 0 && (stoi(num) / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}