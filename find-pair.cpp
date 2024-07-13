int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;

    map<int, int> numMap;
    for (int i = 0; i < n; ++i) {
        if (numMap.find(target - nums[i]) != numMap.end()) {
            cout << target - nums[i] << endl << nums[i];
            break;
        }
        numMap[nums[i]] = i;
    }

    return 0;
}