```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> nums;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string num;
        std::getline(std::cin, num);
        nums.push_back(num);
    }
    std::cout << "Number of special numbers: " << specialFilter(nums) << std::endl;
}

int specialFilter(const std::vector<std::string>& nums) {
    int count = 0;
    for (const auto& num : nums) {
        if (num.length() > 10 && (num[9] - '0') % 2 != 0 && ((num[8] - '0') / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}