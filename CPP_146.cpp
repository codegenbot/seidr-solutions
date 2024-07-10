```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        while (true) {
            std::cout << "Enter element: ";
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

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;