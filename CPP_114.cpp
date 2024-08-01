#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums){
    if(nums.empty()) return 0;
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;
    int start = 0;
    for(int end = 0; end < nums.size(); end++){
        current_sum += nums[end];
        while(current_sum > 0 && start <= end){
            min_sum = std::min(min_sum, current_sum);
            current_sum -= nums[start++];
        }
    }
    return min_sum;
}

int main(){
    assert (minSubArraySum({1, -1}) == -1);
    return 0;
}