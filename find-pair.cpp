int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;
    
    map<int, int> numToIndex;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
            cout << complement << endl;
            cout << nums[i] << endl;
            break;
        }
        numToIndex[nums[i]] = i;
    }
    
    return 0;
}