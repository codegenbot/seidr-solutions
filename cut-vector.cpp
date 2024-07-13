int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int currSum = 0;
    int idx = 0;
    while (idx < nums.size() && currSum + nums[idx] <= target) {
        currSum += nums[idx];
        idx++;
    }
    
    if (abs(sum - 2 * currSum) < abs(sum - 2 * (currSum - nums[idx]))) {
        for (int i = 0; i < idx; i++) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    } else {
        for (int i = 0; i <= idx; i++) {
            cout << nums[i] << endl;
        }
    }
    
    return 0;
}