int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int total_sum = 0;
    for (int num : nums) {
        total_sum += num;
    }

    int left_sum = 0;
    int index = -1;
    for (int i = 0; i < n - 1; ++i) {
        left_sum += nums[i];
        int right_sum = total_sum - left_sum;
        
        if (left_sum == right_sum || abs(left_sum - right_sum) < abs(nums[index] - total_sum)) {
            index = i;
        }
    }

    for (int i = 0; i <= index; ++i) {
        cout << nums[i] << endl;
    }
    cout << total_sum - left_sum << endl;

    return 0;
}