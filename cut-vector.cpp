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
    
    int prefix_sum = 0;
    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        int suffix_sum = sum - prefix_sum;
        
        if (prefix_sum == suffix_sum || abs(prefix_sum - suffix_sum) < abs((prefix_sum - nums[i]) - (suffix_sum + nums[i]))) {
            for (int j = 0; j <= i; j++) {
                cout << nums[j] << endl;
            }
            cout << 0 << endl;
            break;
        }
    }
    
    return 0;
}