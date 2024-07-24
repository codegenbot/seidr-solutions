int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    
    map<int, int> numIdx;
    for (int i = 0; i < n; ++i) {
        if (numIdx.find(target - nums[i]) != numIdx.end()) {
            cout << target - nums[i] << endl;
            cout << nums[i] << endl;
            break;
        }
        numIdx[nums[i]] = i;
    }
    
    return 0;
}