#include <vector>

using namespace std;

long long minSubArraySum(vector<long long> nums) {
    if (nums.empty()) return 0;
    
    int n = nums.size();
    vector<long long> prefixSum(n + 1);
    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + nums[i];
    }
    
    long long minSum = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            long long sum = prefixSum[j + 1] - prefixSum[i];
            if (sum < minSum) minSum = sum;
        }
    }
    
    return minSum;
}