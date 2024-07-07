#include <vector>

using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long total_sum = 0;
    long long min_sum = LLONG_MAX;
    
    for (int i = 0; i < nums.size(); i++) {
        total_sum += nums[i];
        
        if (total_sum < min_sum)
            min_sum = total_sum;
            
        if (total_sum > 0) 
            total_sum = 0;
    }
    return min_sum;
}