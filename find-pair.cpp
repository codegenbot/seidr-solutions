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
    return {-1, -1}; // or throw an exception
}

int main() {
    int n, x;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> x;
    pair<int, int> p = findPair(nums, x);
    cout << p.first << endl;
    cout << p.second << endl;
    return 0;
}