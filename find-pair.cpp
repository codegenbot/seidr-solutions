int main() {
    int n, a, b, target;
    cin >> n >> a >> b >> target;
    
    vector<int> nums = {a, b};
    
    for (int i = 2; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
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