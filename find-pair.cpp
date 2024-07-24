int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    
    map<int, int> m;
    for (int i = 0; i < n; ++i) {
        if (m.find(target - nums[i]) != m.end()) {
            cout << target - nums[i] << endl << nums[i] << endl;
            break;
        }
        m[nums[i]] = i;
    }
    
    return 0;
}