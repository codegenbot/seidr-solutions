int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += num;
    }

    bool found = false;
    int prefixSum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        if (prefixSum * 2 == sum || (prefixSum * 2 == sum - nums[i])) {
            for (int j = 0; j <= i; ++j) {
                cout << nums[j] << endl;
            }
            cout << 0 << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No valid cut found" << endl;
    }

    return 0;
}