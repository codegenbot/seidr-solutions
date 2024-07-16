int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int target = sum / 2;
    int prefixSum = 0;
    int closestSum = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        int diff = abs(2 * prefixSum - sum);
        if (diff < closestSum) {
            closestSum = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}