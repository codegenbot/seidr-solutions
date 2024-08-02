long long minSubArraySum(vector<long long> nums) {
    if (nums.empty()) {
        return 0;
    }
    
    long long min_sum = LLONG_MAX;
    long long left = 0, current_sum = 0;
    
    for (int right = 0; right < nums.size(); right++) {
        current_sum += nums[right];
        
        while (current_sum > 0) {
            min_sum = min(min_sum, current_sum);
            current_sum -= nums[left++];
        }
    }
    
    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
}