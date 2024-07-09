#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long minSum = INT64_MAX;
    long long currentSum = 0;
    
    for(long long num : nums) {
        currentSum += num;
        
        if(currentSum > 0) {
            minSum = min(minSum, currentSum);
        } else {
            currentSum = 0;
        }
    }
    
    return minSum > 0 ? 0 : minSum;
}