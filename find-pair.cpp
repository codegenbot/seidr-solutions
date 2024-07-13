int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        if (mp.find(target - nums[i]) != mp.end()) {
            cout << nums[i] << endl;
            cout << target - nums[i] << endl;
            break;
        }
        mp[nums[i]] = i;
    }
    
    return 0;
}