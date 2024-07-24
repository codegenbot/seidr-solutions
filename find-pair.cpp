int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int target;
    cin >> target;

    map<int, int> hash;
    for (int i = 0; i < n; ++i) {
        int diff = target - nums[i];
        if (hash.find(diff) != hash.end()) {
            cout << diff << endl;
            cout << nums[i] << endl;
            break;
        }
        hash[nums[i]] = i;
    }

    return 0;
}