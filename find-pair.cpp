int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    
    map<int, int> numMap;
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            cout << complement << endl;
            cout << nums[i] << endl;
            break;
        }
        numMap[nums[i]] = i;
    }
    
    return 0;
}