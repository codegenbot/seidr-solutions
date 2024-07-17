#include <iostream>
#include <vector>
#include <numeric>
#include <sstream>

int basement(const std::vector<int>& nums) {
    int sum = 0, index = -1;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            index = i;
            break;
        }
    }
    return index + 1;
}

int main() {
    std::vector<int> nums;
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);
    int num;
    while (iss >> num) {
        nums.push_back(num);
    }
    std::cout << basement(nums) << std::endl;
    return 0;
}