long long minSubArraySum(vector<long long> nums){
    int n = nums.size();
    long long res = LLONG_MAX;
    long long sum = 0;

    for(int i=0; i<n; i++){
        sum += nums[i];
        if(sum < res) res = sum;
        for(int j=i+1; j<n; j++){
            sum -= nums[i];
            sum += nums[j];
            if(sum < res) res = sum;
        }
    }

    return res;
}