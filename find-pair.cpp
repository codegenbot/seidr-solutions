#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {{}, {}};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int& num : nums) {
        cin >> num;
    }
    int target;
    cin >> target;
    
    pair<int, int> result = findPair(nums, target);
    if (result.first != 0 && result.second != 0) {
        cout << result.first << endl;
        cout << result.second << endl;
    } else {
        cout << "No such pair found" << endl;
    }
    
    return 0;
}