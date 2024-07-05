```c++
#include <iostream>
#include <vector>

int basement(std::vector<int>& nums) {
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0)
            return i; 
    }
    return -1; 
}

int main() {
    std::vector<int> nums1(-2,1,-3,4,-1,2,1,-5,4);
    std::cout << basement(nums1) << std::endl;

    std::vector<int> nums2(0);
    nums2.push_back(0);nums2.push_back(-1);nums2.push_back(2);nums2.push_back(-3);nums2.push_back(1);

    std::cout << basement(nums2) << std::endl;

    return 0;
}