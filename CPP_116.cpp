#include <iostream>
#include <algorithm>
#include <vector>

bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

class Solution {
public:
    std::vector<int> sortArray(std::vector<int>& nums) {
        if (nums.empty()) 
            return {};
        
        std::sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 1; ++i) {
            if ((nums[i] & (nums[i + 1] - 1)) != 0)
                return {};
        }
        
        return nums;
    }
};

int main() {
    Solution s;
    std::vector<int> input = {2,4,8,16,32};
    bool result = compare(s.sortArray(input), input);
    std::cout << "Result: " << (result ? "True" : "False") << std::endl;
    return 0;
}