int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int diff = INT_MAX;
    int idx = 0;
    
    for (int i = 0; i < nums.size() - 1; ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j <= i; ++j) {
            left_sum += nums[j];
        }
        for (int j = i + 1; j < nums.size(); ++j) {
            right_sum += nums[j];
        }
        
        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            idx = i;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << "\n";
    }
    cout << "\n";
    for (int i = idx + 1; i < nums.size(); ++i) {
        cout << nums[i] << "\n";
    }

    return 0;
}