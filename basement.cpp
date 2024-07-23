#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    int basement_index = -1; 
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            basement_index = i + 1; 
            break; 
        }
    }
    return basement_index;

}

int main() {
    std::vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = basement(nums);
    // do something with the result
    return 0;
}