int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0, rightSum = totalSum;
    int idx = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        if (abs(leftSum - rightSum) <= 1) {
            idx = i;
            break;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}