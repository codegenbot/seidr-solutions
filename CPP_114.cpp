```cpp
#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long total = 0;
    long long min_sum = LLONG_MAX;
    
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        
        if (total < min_sum)
            min_sum = total;
        
        if (total > 0) 
            total = 0;
    }
    
    return min_sum;
}

long long minSumSubarray(vector<long long> arr) {
    if(arr.size() == 0)
        return 0;

    long long minSum = LLONG_MAX, sum = 0;
    for(long long i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if(sum < minSum)
            minSum = sum;
        if(sum > 0) 
            sum = 0;
    }
    return minSum;
}

int main() {
    vector<long long> nums = {1,4,6,-5};
    cout << "The minimum sum of a subarray is: " << minSubArraySum(nums) << endl;

    return 0;
}