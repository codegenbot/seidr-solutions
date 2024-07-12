int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += nums[i];
    }
    
    vector<int> firstHalf;
    int sum = 0;
    int closestDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        int diff = abs(sum - (totalSum - sum));
        if (diff < closestDiff) {
            closestDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        firstHalf.push_back(nums[i]);
    }
    
    cout << "1" << endl;
    for (int i = 0; i < firstHalf.size(); ++i) {
        cout << firstHalf[i] << endl;
    }
    
    cout << "0" << endl;
    
    return 0;
}