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
        if (numToIndex.find(target - nums[i]) != numToIndex.end()) {
            cout << nums[i] << endl;
            cout << target - nums[i] << endl;
            break;
        }
        numToIndex[nums[i]] = i;
    }

    return 0;
}