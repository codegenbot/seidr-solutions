#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    long long sum = 0;
    int negIndex = -1;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            negIndex = i;
            break;
        }
    }
    return negIndex;
}

int main() {
    std::vector<int> nums = {2, 3, -1, 5, -7};
    std::cout << basement(nums) << std::endl;
    return 0;
}