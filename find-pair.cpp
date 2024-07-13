vector<int> findPair(vector<int>& nums, int target) {
    map<int, int> seen;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()) {
            return {complement, nums[i]};
        }
        seen[nums[i]] = i;
    }
    return {};
}
int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    vector<int> result = findPair(nums, target);
    for (int num : result) {
        cout << num << endl;
    }
    return 0;
}