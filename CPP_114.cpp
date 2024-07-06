#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums);

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    return 0;
}

long long minSubArraySum(std::vector<long long> nums){
    long long sum = 0;
    long long min_sum = LLONG_MAX;

    for(int i = 0; i < nums.size(); i++){
        sum = 0;
        for(int j = i; j < nums.size(); j++){
            sum += nums[j];
            if(sum < min_sum)
                min_sum = sum;
        }
    }

    return min_sum;
}