#include <iostream>
#include <vector>

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
        nums.push_back(std::stoi(argv[i]));
    }

    int result = basement(nums);
    std::cout << result << std::endl;
    return 0;
}