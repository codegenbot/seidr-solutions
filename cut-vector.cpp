int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
    }
    
    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        int remainingSum = sum - prefixSum;
        int diff = abs(remainingSum - prefixSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << "0" << endl;
    
    return 0;
}