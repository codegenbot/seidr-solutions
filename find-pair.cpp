int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    
    map<int, int> num_idx;
    for (int i = 0; i < n; i++) {
        if (num_idx.find(target - nums[i]) != num_idx.end()) {
            cout << target - nums[i] << endl;
            cout << nums[i] << endl;
            break;
        }
        num_idx[nums[i]] = i;
    }
    
    return 0;
}