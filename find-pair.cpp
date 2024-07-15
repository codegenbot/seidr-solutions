#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int target = 5;
    vector<int> result = findPair(nums, target);
    if (result.size() > 0) {
        cout << "The pair is: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }
    return 0;

}

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {};
}