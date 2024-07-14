```cpp
#include <vector>
#include <map>

int pair[2];

void findPair(std::vector<int> nums, int target) {
    std::map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            pair[0] = complement;
            pair[1] = nums[i];
            return;
        }
        numMap[nums[i]] = i;
    }
}

int main() {
    std::vector<int> nums = {10, 20, 30, 40, 50};
    int target = 60;
    findPair(nums, target);
    if (pair[0] != -1 && pair[1] != -1) {
        std::cout << "The two elements that sum to the target are: " << pair[0] << ", " << pair[1] << std::endl;
    } else {
        std::cout << "No such pair found." << std::endl;
    }
    return 0;
}