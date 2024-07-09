```cpp
#include <vector>
using namespace std;

int minSubArraySum(vector<long long> nums) {
    int sum = 0, min_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum > 0 && sum < min_sum)
            min_sum = sum;
        else if (sum >= 0) 
            sum = 0;
    }
    return min_sum;
}