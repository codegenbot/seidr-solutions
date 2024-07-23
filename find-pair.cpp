int main() {
    int n, a, b, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    
    map<int, int> seen;
    for (int i = 0; i < n; i++) {
        if (seen.count(target - nums[i])) {
            cout << target - nums[i] << endl << nums[i];
            break;
        }
        seen[nums[i]] = i;
    }
    
    return 0;
}