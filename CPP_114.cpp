Here is the solution:

long long minSubArraySum(vector<long long> nums){
    long long sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum > 0) {
            long long mini = sum;
            sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                if (sum <= mini) {
                    mini = sum;
                }
            }
            return mini;
        }
    }
    return sum;
}