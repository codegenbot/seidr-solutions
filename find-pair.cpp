#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int num : nums) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
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
    pair<int, int> result = findPair(nums, target);
    if (result.first != -1) {
        cout << result.first << " " << result.second << endl;
    } else {
        cout << "No pair found" << endl;
    }
    return 0;
}