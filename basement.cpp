#include <iostream>
#include <vector>
#include <sstream>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i + 1;
        }
    }
    return -1;
}

int main(int argc, char *argv[]) {
    std::vector<int> nums;
    for (int i = 1; i < argc; ++i) {
        std::istringstream iss(argv[i]);
        int num;
        if (iss >> num) {
            nums.push_back(num);
        }
    }

    int result = basement(nums);
    std::cout << result << std::endl;
    return 0;
}