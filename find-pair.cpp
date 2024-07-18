int main() {
    int n, x, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;
    
    map<int, int> numIdx;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (numIdx.find(complement) != numIdx.end()) {
            cout << complement << endl;
            cout << nums[i] << endl;
            break;
        }
        numIdx[nums[i]] = i;
    }
    
    return 0;
}