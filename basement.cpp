#include <iostream>
#include <vector>
#include <sstream>
#include <numeric>

int basement(const std::vector<int>& nums) {
    int sum = 0, min_sum = std::accumulate(nums.begin(), nums.end(), 0) + 1, index = -1;
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
    std::string input;
    std::getline(std::cin, input);
    std::vector<int> nums;
    std::istringstream iss(input);
    int num;
    while (iss >> num) {
        nums.push_back(num);
    }
    std::cout << basement(nums) << std::endl;
    return 0;
}