```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string str;
        while (true) {
            std::cout << "Enter element: ";
            std::getline(std::cin, str);
            if (!str.empty()) {
                nums.push_back(stoi(str));
                break;
            }
            else {
                std::cerr << "Invalid input! Please enter a number.\n";
                std::cin.clear();
                std::cin.ignore(INT_MAX, '\n');
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