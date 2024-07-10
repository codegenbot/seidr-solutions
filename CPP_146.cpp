```cpp
#include <iostream>
#include <vector>

int specialFilter(const std::vector<std::string>&);

int main() {
    std::vector<std::string> nums;
    std::cout << "Enter the numbers (enter 'stop' to finish): ";
    std::string num;
    while (true) {
        getline(std::cin, num);
        if (num == "stop") break;
        nums.push_back(std::to_string(stoi(num.substr(0, num.size() - 1).c_str())).substr(0, 9)); 
    }
    std::cout << "Number of special numbers: " << specialFilter(nums) << std::endl;
}

int specialFilter(const std::vector<std::string>& nums) {
    int count = 0;
    for (const auto& num : nums) {
        if (num.length() > 1 && num.length() <= 10 && (num.back() - '0') % 2 != 0 && ((num[8] - '0') / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}