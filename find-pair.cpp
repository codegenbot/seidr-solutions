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
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            cout << complement << endl;
            cout << nums[i] << endl;
            break;
        }
        mp[nums[i]] = i;
    }

    return 0;
}