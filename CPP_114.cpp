Here is the completed code:

long long minSubArraySum(vector<long long> nums){
    long long sum = 0;
    for(long long i : nums) {
        sum += i;
    }
    return *min_element(nums.begin(), nums.end()) <= 0 ? sum : -sum;
}