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
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            cutIndex = i;
            break;
        }
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> subvector2(nums.begin() + cutIndex + 1, nums.end());
    
    for (int num : subvector1) {
        cout << num << endl;
    }
    
    for (int num : subvector2) {
        cout << num << endl;
    }
    
    return 0;
}