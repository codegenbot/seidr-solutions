```cpp
#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    int previousSum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0 && previousSum >= 0)
            return i + 1;
        else 
            previousSum = sum;
    }
    return -1; // return -1 if no such index exists
}

int main() {
    std::vector<int> nums = {-2, 3, 1, -5, 4};
    int result = basement(nums);
    if (result == -1) {
        std::cout << "No such index found." << std::endl;
    } else {
        std::cout << "First index with negative sum: " << result << std::endl;
    }
    return 0;
}