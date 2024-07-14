#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {complement, nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    return {-1, -1};  // or throw an exception
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &num : nums) {
        cin >> num;
    }
    int target;
    cin >> target;
    
    pair<int, int> result = findPair(nums, target);

    if (result.first != -1) {
        cout << result.first << '\n' << result.second << '\n';
    } else {
        cout << "No solution found" << '\n';
    }

    return 0;
}