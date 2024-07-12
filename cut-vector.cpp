int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int sum = 0;
    for (int n : nums) {
        sum += n;
    }
    
    int target = sum / 2;
    int prefixSum = 0;
    int idx = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
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