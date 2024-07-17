#include <vector>

int basement(std::vector<int>& nums) {
    int minIndex = 0;
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0)
            return i + 1;
        else if (total > 0 && minIndex == 0) 
            minIndex = i + 1;  
    }
    if(minIndex != 0) 
        return minIndex; 
    return -1;

}

int main() {
    std::vector<int> nums = {17,12,77,-31,85,-34,52,77,67,-81,-43,-2,-63,-58,-45,-44,-70};
    int result = basement(nums);
    return 0;
}