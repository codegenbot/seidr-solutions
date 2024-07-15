int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int diff = target - nums[i];
        if (mp.find(diff) != mp.end()) {
            cout << diff << endl;
            cout << nums[i] << endl;
            break;
        }
        mp[nums[i]] = i;
    }

    return 0;
}