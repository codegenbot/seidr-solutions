#include <iostream>
#include <vector>
#include <sstream>

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
    std::cin >> n;
    std::vector<int> nums;
    std::string line;
    
    for (int i = 0; i < n; ++i) {
        if (std::cin >> num) {
            nums.push_back(num);
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            --i;
        }
    }
    
    int result = basement(nums);
    std::cout << result << std::endl;
    
    return 0;
}