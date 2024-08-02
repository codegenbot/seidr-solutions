void findPair(vector<int>& nums, int target) {
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            cout << complement << endl << nums[i] << endl;
            return;
        }
        mp[nums[i]] = i;
    }
}
int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    findPair(nums, target);
    return 0;
}