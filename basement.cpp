#include <vector>

int basement(std::vector<int>& nums) {
    int minIndex = 0;
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0)
            return i + 1;
    }
    return -1;
}

int main() {
    std::vector<int> nums = {-2, 3, 1, -5, 4};
    int result = basement(nums);
    if (result == -1) std::cout << "No such index found." << std::endl;
    else std::cout << "First negative sum index: " << result << std::endl;
    return 0;
}