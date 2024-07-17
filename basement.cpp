#include <iostream>
#include <vector>
#include <sstream>

int basement(const std::vector<int>& nums) {
    int sum = 0, min_sum = 0, index = -1;
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
    std::istringstream stream(line);
    int num;
    while (stream >> num) {
        nums.push_back(num);
    }
    
    int result = basement(nums);
    std::cout << result << std::endl;

    return 0;
}