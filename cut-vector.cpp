int main() {
    int n;
    vector<int> nums;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += num;
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
    
    if (cutIndex != -1) {
        cout << cutIndex + 1 << endl;
        for (int i = 0; i <= cutIndex; i++) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    } else {
        cout << n << endl;
        for (int num : nums) {
            cout << num << endl;
        }
        cout << 0 << endl;
    }
    
    return 0;
}