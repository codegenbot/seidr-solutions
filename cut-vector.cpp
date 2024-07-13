int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int halfSum = sum / 2;
    int currSum = 0;
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        currSum += nums[i];
        if (currSum >= halfSum) {
            idx = i;
            break;
        }
    }
    
    vector<int> subVec1(nums.begin(), nums.begin() + idx + 1);
    vector<int> subVec2(nums.begin() + idx + 1, nums.end());
    
    for (int num : subVec1) {
        cout << num << endl;
    }
    for (int num : subVec2) {
        cout << num << endl;
    }
    
    return 0;
}