```cpp
#include <vector>
#include <unordered_map>

int findPair(std::vector<int> nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return complement * 2 + i;
        }
        numMap[nums[i]] = i;
    }
    return -1;
}

int main() {
    std::vector<int> nums = {10, 20, 30, 40, 50};
    int target = 60;
    int result = findPair(nums, target);
    if (result != -1) {
        std::cout << "The two elements that sum to the target are: " << (result - i) / 2 << ", " << (result - i) / 2 << std::endl;
    } else {
        std::cout << "No such pair found." << std::endl;
    }
    return 0;
}