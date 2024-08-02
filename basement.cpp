#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, num;
    std::string line;
    std::vector<int> nums;
    
    std::getline(std::cin, line);
    std::stringstream ss(line);
    while (ss >> num) {
        nums.push_back(num);
    }
    
    int result = basement(nums);
    std::cout << result << std::endl;
    
    return 0;
}