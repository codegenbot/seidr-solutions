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
    
    int left_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < n; i++) {
        left_sum += nums[i];
        int right_sum = sum - left_sum;
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
        
        if (diff == 0) {
            break;
        }
    }
    
    for (int i = 0; i <= cut_index; i++) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}