Here is the solution:

long long minSubArraySum(vector<long long> nums){
    long long min_sum = LONG_LONG_MAX;
    long long current_sum = 0;

    for(int i=0; i<nums.size(); i++){
        current_sum += nums[i];

        if(current_sum < min_sum){
            min_sum = current_sum;
        }

        if(current_sum > 0){
            int left = i;
            while(left > 0 && current_sum >= (long long)nums[left-1]){
                current_sum -= nums[left-1];
                left--;
            }
            if(current_sum < min_sum){
                min_sum = current_sum;
            }
        }
    }

    return min_sum;
}