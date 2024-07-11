int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int min_diff = INT_MAX;
    int cut_idx = -1;
    
    for (int i = 1; i < nums.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += nums[j];
        }
        for (int j = i; j < nums.size(); ++j) {
            right_sum += nums[j];
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    for (int i = 0; i < cut_idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cut_idx; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}