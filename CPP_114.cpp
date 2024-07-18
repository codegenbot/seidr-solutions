#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long minSubArraySum(vector<long long> nums);

int main() {
    // Add testing or input code here
    return 0;
}

long long minSubArraySum(vector<long long> nums){
    long long min_sum = nums[0];
    long long current_sum = 0;
    
    for (long long num : nums) {
        current_sum = min(num, current_sum + num);
        min_sum = min(min_sum, current_sum);
    }
    
    return min_sum;
}