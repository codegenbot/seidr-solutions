#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int num : nums) {
        int complement = target - num;
        if (numMap.count(complement)) {
            return {complement, num};
        }
        numMap[num] = 1;
    }
    return {-1, -1}; // Return default pair if no pair found
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    auto result = findPair(nums, target);
    cout << result.first << endl;
    cout << result.second << endl;
    return 0;
}