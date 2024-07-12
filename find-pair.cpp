int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;
    
    map<int, int> num_to_index;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (num_to_index.find(complement) != num_to_index.end()) {
            cout << complement << endl;
            cout << nums[i] << endl;
            break;
        }
        num_to_index[nums[i]] = i;
    }
    
    return 0;
}