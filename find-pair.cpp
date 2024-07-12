int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    map<int, int> num_indices;
    for (int i = 0; i < n; ++i) {
        if (num_indices.find(target - nums[i]) != num_indices.end()) {
            cout << nums[i] << endl;
            cout << target - nums[i] << endl;
            break;
        }
        num_indices[nums[i]] = i;
    }
    return 0;
}