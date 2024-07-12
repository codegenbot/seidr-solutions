int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    
    int halfSum = sum / 2;
    int prefixSum = 0;
    int idx = 0;
    
    while (prefixSum <= halfSum) {
        prefixSum += nums[idx++];
    }
    
    int diff1 = abs(halfSum - prefixSum + nums[idx-1]);
    int diff2 = abs(halfSum - prefixSum);
    
    if (diff1 < diff2) {
        for (int i = 0; i < idx; ++i) {
            cout << nums[i] << endl;
        }
        cout << diff1 << endl;
    } else {
        for (int i = 0; i < idx - 1; ++i) {
            cout << nums[i] << endl;
        }
        cout << diff2 << endl;
    }
    
    return 0;
}