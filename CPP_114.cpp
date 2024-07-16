#include <vector>

long long minSubArraySum(vector<long long> nums){
    int n = nums.size();
    long long res = LLONG_MAX;
    long long cur_sum = 0;

    for(int i = 0; i < n; i++){
        cur_sum += nums[i];
        if(cur_sum > 0) {
            res = min(res, cur_sum);
        } else {
            cur_sum = 0;
        }
    }

    return (res == LLONG_MAX)? nums[0] : res;