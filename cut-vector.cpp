#include <vector>
#include <iostream>
#include <algorithm>

std::vector<std::vector<int>> cutVector(std::vector<int>& nums) {
    int n = nums.size();
    std::sort(nums.begin(), nums.end());
    
    if (n == 1)
        return {{nums}};
    
    int min_diff = INT_MAX;
    int index = 0;
    for(int i=1; i<n; i++){
        if(abs((int)std::pow(2, (int)log2(nums[i-1] + 1)) - (int)std::pow(2, (int)log2(nums[i] + 1))) < min_diff){
            min_diff = abs((int)std::pow(2, (int)log2(nums[i-1] + 1)) - (int)std::pow(2, (int)log2(nums[i] + 1)));
            index = i;
        }
    }
    
    std::vector<int> left(std::vector<int>(nums.begin(), nums.begin()+index));
    std::vector<int> right(std::vector<int>(nums.begin()+index, nums.end()));
    
    return {{left}, {right}};
}