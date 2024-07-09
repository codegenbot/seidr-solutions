#include <vector>

long long minSubArraySum(vector<long long> nums) {
    long long total = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];

        if (total < min_sum)
            min_sum = total;

        if (total > 0) 
            total = 0;
    }

    return min_sum;
}

long long findMinAverage(vector<long long> arr) {
    int n = arr.size();
    vector<long long> prefixSum(n + 1);

    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + arr[i];
    }

    long long min_sum = LLONG_MAX;
    for (int i = 0; i <= n; i++) {
        long long total = prefixSum[i];
        if (total < min_sum)
            min_sum = total;

        if (i < n && total > 0) 
            total = 0;
    }

    return min_sum;
}

int main() {
    vector<long long> nums = {1,2,-3};
    cout << findMinAverage(nums) << endl;
    return 0;
}