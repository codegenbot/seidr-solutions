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
        int complement = target - nums[i];
        if (numIdx.find(complement) != numIdx.end()) {
            cout << nums[numIdx[complement]] << endl;
            cout << nums[i] << endl;
            break;
        }
        numIdx[nums[i]] = i;
    }
    
    return 0;
}