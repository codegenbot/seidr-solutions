int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    
    int total = 0;
    for (int num : nums) {
        total += num;
    }
    
    int left_sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        left_sum += nums[i];
        int right_sum = total - left_sum;
        if (left_sum == right_sum || abs(left_sum - right_sum) < abs(nums[i+1] - left_sum)) {
            for (int j = 0; j <= i; ++j) {
                cout << nums[j] << endl;
            }
            cout << endl;
            for (int j = i+1; j < nums.size(); ++j) {
                cout << nums[j] << endl;
            }
            break;
        }
    }
    
    return 0;
}