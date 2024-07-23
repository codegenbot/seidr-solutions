```
#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

long long minSubArraySum(std::vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        
        while(sum > 0){
            sum -= nums[i];
            i++;
            if(sum <= 0) break;
        }
    }
    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    std::cout << minSubArraySum({{1, -1}}) << '\n';
    return 0;
}