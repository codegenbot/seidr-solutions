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
    for (int i = 0; i < nums.size(); ++i) {
        currSum += nums[i];
        if (currSum >= target) {
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