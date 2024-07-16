int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 1; i < n; ++i) {
        int left_sum = 0;
        int right_sum = 0;
        
        for (int j = 0; j < i; ++j) {
            left_sum += nums[j];
        }
        
        for (int j = i; j < n; ++j) {
            right_sum += nums[j];
        }
        
        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << endl;
    
    for (int i = cut_index; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}