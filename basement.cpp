```c++
#include <vector>
#include <iostream>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    std::vector<int> nums = {1,-2,3,10,6,-4,-5};
    int result = basement(nums);
    if (result == -1) {
        std::cout << "No such index found.\n";
    } else {
        std::cout << "The first index is: " << result << ".\n";
    }
    return 0;
}