int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int target = sum / 2;
    int prefixSum = 0;
    int diff = INT_MAX;
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        int newDiff = abs(2 * prefixSum - sum);
        if (newDiff < diff) {
            diff = newDiff;
        } else {
            cout << i + 1 << endl;
            for (int j = 0; j <= i; j++) {
                cout << nums[j] << endl;
            }
            cout << endl;
            break;
        }
    }

    return 0;
}