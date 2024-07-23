#include <utility>
#include <vector>
#include <unordered_map>
#include <iostream>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {nums[i], complement};
        }
        numIndex[nums[i]] = i;
    }
    return {-1, -1};
}

int main() {
    std::vector<int> nums = {-17987, 20, -3572, 4221, -8934, 6903, 6940, 5677, 4632, -394, -5232, 1612, 7872, -7208, -8088, 1713, -9053, -361, 9999, -7965, 8186, -2628};
    int target = -17987;
    std::pair<int, int> pair = findPair(nums, target);
    if (pair.first == -1 && pair.second == -1) {
        std::cout << "No such pair found." << std::endl;
    } else {
        std::cout << "The pair is: " << pair.first << ", " << pair.second << std::endl;
    }
    return 0;
}