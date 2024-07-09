long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long res = INT_MAX;
    long long left = 0, curr_sum = 0;

    for (int right = 0; right < n; right++) {
        curr_sum += nums[right];

        while (curr_sum > res)
            curr_sum -= nums[left++];

        if (curr_sum < res)
            res = curr_sum;
    }

    return res;
}

int main() {
    vector<long long> nums = {1,2};
    cout << minSubArraySum(nums) << endl;
    return 0;
}