#include <vector>
#include <cstdio>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) { 
            return i+1; 
        }
    }
    return -1;

}

int main() {
    std::vector<int> nums = {-2, 3, 4};
    int result = basement(nums);
    if (result != -1) {
        printf("Basement found at index %d\n", result);
    } else {
        printf("No basement found.\n");
    }
    return 0;