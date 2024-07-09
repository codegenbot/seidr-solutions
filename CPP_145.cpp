```c++
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a,std::vector<int> b){
    return a==b;
}

int main() {
    std::vector<int> nums = {0,6,6,-76,-21,23,4};
    assert(issame({-76, -21, 0, 4, 23, 6, 6}, order_by_points(nums)));
    return 0;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        pairs.push_back({sum, i});
    }
    std::sort(pairs.begin(), pairs.end());
    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }
    return result;
}