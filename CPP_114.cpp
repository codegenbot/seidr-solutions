```cpp
int minSubArraySum(vector<int> nums) {
    int min_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        int current_sum = 0;
        for (int j = i; j < nums.size(); j++) {
            current_sum += nums[j];
            if (current_sum < min_sum) {
                min_sum = current_sum;
            }
        }
    }
    return min_sum;
}

int main() {
    cout << "minSubArraySum({1, -1}) = " << minSubArraySum({1, -1}) << endl;
    return 0;
}