Here is the solution:

#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            return {complement, nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    return {};
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
    if (!result.empty()) {
        cout << result.first << endl << result.second << endl;
    } else {
        cout << "No such pair exists." << endl;
    }

    return 0;
}