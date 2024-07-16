void findPair(vector<int> nums, int target) {
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        if (mp.find(target - nums[i]) != mp.end()) {
            cout << nums[i] << endl;
            cout << target - nums[i] << endl;
            return;
        }
        mp[nums[i]] = i;
    }
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
    findPair(nums, target);
    return 0;
}