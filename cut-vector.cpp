int main() {
    vector<int> nums;
    int n;
    
    while (cin >> n) {
        nums.push_back(n);
    }
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int target = sum / 2;
    
    int prefixSum = 0;
    int index = 0;
    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            index = i;
            break;
        }
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + index + 1);
    vector<int> subvector2(nums.begin() + index + 1, nums.end());
    
    for (int num : subvector1) {
        cout << num << endl;
    }
    
    for (int num : subvector2) {
        cout << num << endl;
    }
    
    return 0;
}