int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int total_sum = 0;
    for (int n : nums) {
        total_sum += n;
    }
    
    int left_sum = 0;
    int min_diff = INT_MAX;
    int cut_spot = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        left_sum += nums[i];
        int right_sum = total_sum - left_sum;
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            cut_spot = i;
        }
    }
    
    for (int i = 0; i <= cut_spot; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}