#include <vector>
#include <unordered_map>

using namespace std;

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {-1, 0, 3, 7, 5};
    int target = 2;
    vector<int> result = findPair(nums, target);
    if (!result.empty()) {
        cout << "Found pair: (" << result[0] << ", " << result[1] << ")" << endl;
    } else {
        cout << "No pair found." << endl;
    }
    return 0;
}