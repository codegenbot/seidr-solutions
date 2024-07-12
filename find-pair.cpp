int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;
    
    map<int, int> map;
    
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            cout << complement << endl;
            cout << nums[i] << endl;
            break;
        }
        map[nums[i]] = i;
    }
    
    return 0;
}