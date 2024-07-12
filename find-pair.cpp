int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    
    map<int, int> numToIndex;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
            cout << nums[numToIndex[complement]] << endl;
            cout << nums[i] << endl;
            break;
        }
        numToIndex[nums[i]] = i;
    }
    
    return 0;
}