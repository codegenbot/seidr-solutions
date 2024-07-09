Here is the solution:

int minSubArraySum(vector<long long> nums) {
    int min_sum = INT_MAX, current_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum < min_sum)
            min_sum = current_sum;
        if (current_sum > 0)
            current_sum = 0;
    }
    return min_sum;

}
int main() {
    assert(minSubArraySum({1, -1}) == -1);
    return 0;
}