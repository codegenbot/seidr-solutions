vector<int> cutVector(const vector<int>& nums) {
    int n = nums.size();
    vector<int> leftSum(n, 0), rightSum(n, 0);
    leftSum[0] = nums[0];
    rightSum[n-1] = nums[n-1];
    
    for (int i = 1; i < n; ++i) {
        leftSum[i] = leftSum[i-1] + nums[i];
    }
    for (int i = n-2; i >= 0; --i) {
        rightSum[i] = rightSum[i+1] + nums[i];
    }
    
    int minDiff = INT_MAX, cutIndex = -1;
    for (int i = 0; i < n-1; ++i) {
        int diff = abs(leftSum[i] - rightSum[i+1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> right(nums.begin() + cutIndex + 1, nums.end());
    
    cout << "Left subvector: ";
    for (int num : left) cout << num << " ";
    cout << endl;
    
    cout << "Right subvector: ";
    for (int num : right) cout << num << " ";
    cout << endl;
    
    return {left, right};
}

int main() {
    vector<int> nums;
    int temp;
    while (cin >> temp) {
        nums.push_back(temp);
    }
    
    cutVector(nums);
    
    return 0;
}