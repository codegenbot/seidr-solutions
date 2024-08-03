#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if (numMap.count(complement)) {
            return make_pair(complement, nums[i]);
        }
        
        numMap[nums[i]] = i;
    }
    
    return make_pair(-1, -1); // return -1,-1 if no pair found
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &i : nums) {
        cin >> i;
    }

    int target;
    cin >> target;

    auto result = findPair(nums, target);

    cout << result.first << "\n";
    cout << result.second << "\n";

    return 0;
}