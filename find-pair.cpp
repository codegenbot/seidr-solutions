```c++
#include <vector>
#include <utility>
#include <unordered_map>
#include <stdexcept>

std::pair<int,int> find_pair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return std::make_pair(nums[i], complement);
        }
        numMap[nums[i]] = i;
    }
    throw std::runtime_error("No pair found that sums to the target");
}

int main() {
    return 0;
}