int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;

    map<int, int> seen;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()) {
            cout << complement << endl;
            cout << nums[i] << endl;
            break;
        }
        seen[nums[i]] = i;
    }

    return 0;
}