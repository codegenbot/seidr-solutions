```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> nums;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        while (true) {
            std::cout << "Enter element: ";
            if (!(std::cin >> std::ws)) {
                std::cerr << "Invalid input! Please enter a string.\n";
                std::cin.clear();
                std::cin.ignore(INT_MAX, '\n');
            } else {
                break;
            }
        }
        std::getline(std::cin, nums[i]);
    }
    std::cout << "Number of special numbers: " << specialFilter(nums) << std::endl;
}

int specialFilter(std::vector<std::string> nums) {
    int count = 0;
    for (const auto& num : nums) {
        if (num.length() > 10 && (num[9] - '0') % 2 != 0 && ((num[8] - '0') / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}