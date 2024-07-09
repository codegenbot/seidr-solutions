long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];

        if (current_sum < min_sum) {
            min_sum = current_sum;
        }

        if (current_sum > 0) {
            int left = i;
            while (left >= 0 && current_sum > min_sum) {
                current_sum -= nums[left];
                left--;
            }
        } else {
            current_sum = 0;
        }
    }

    return min_sum;
}

int main() {
    vector<long long> nums;
    long long n;
    cin >> n;
    for(int i=0; i<n; i++){
        long long num;
        cin >> num;
        nums.push_back(num);
    }
    cout << minSubArraySum(nums) << endl;
    return 0;
}