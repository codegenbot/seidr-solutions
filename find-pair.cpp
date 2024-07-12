int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    
    map<int, int> pos;
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (pos.find(complement) != pos.end()) {
            cout << complement << endl << nums[i] << endl;
            break;
        }
        pos[nums[i]] = i;
    }
    
    return 0;
}