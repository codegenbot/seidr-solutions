#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long sum = 0, min_sum = LONG_LONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        while(sum > 0){
            if (sum < min_sum)
                min_sum = sum;
            sum -= nums[i++];
            if(i >= nums.size())
                break;
        }
    }
    return min_sum;
}

int main() {
    std::cout << "minSubArraySum({1,2,3}) == " << minSubArraySum({1, 2, 3}) << std::endl;
    return 0;
}