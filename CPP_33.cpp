#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> nums) {
    std::sort(nums.begin() + 2, nums.begin() + 5);
    return nums;
}

std::vector<int> input = {5, 6, 3, 4, 8, 9, 2, 1};
std::vector<int> result = sort_third(input);

for (int num : result) {
    std::cout << num << " ";
}

return 0;