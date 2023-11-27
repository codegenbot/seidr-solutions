#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long minSum = nums[0]; // Initialize minSum with the first element of the vector
    long long currentSum = nums[0]; // Initialize currentSum with the first element of the vector

    // Iterate through the vector starting from the second element
    for (int i = 1; i < nums.size(); i++) {
        // If adding the current element to the currentSum results in a smaller value than the current element itself,
        // update the currentSum with the current element
        if (currentSum + nums[i] < nums[i]) {
            currentSum = nums[i];
        } else {
            // Otherwise, add the current element to the currentSum
            currentSum += nums[i];
        }

        // If the currentSum is smaller than the minSum, update the minSum
        if (currentSum < minSum) {
            minSum = currentSum;
        }
    }

    return minSum;
}