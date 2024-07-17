#include <iostream>
#include <vector>
#include <numeric>
#include <sstream>
#include <climits>

int basement(const std::vector<int>& nums) {
    int sum = 0, min_sum = INT_MAX, index = -1;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
            index = i;
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