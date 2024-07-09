```cpp
int minSubArraySum(vector<int> nums) {
    int total = 0;
    int min_sum = INT_MAX;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i; j < nums.size(); j++) {
            total = 0;
            for (int k = i; k <= j; k++) {
                total += nums[k];
            }
            if (total < min_sum)
                min_sum = total;
        }
    }

    return min_sum;
}