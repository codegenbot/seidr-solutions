int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    
    int diff = INT_MAX;
    int index = -1;
    
    for (int i = 1; i < nums.size(); ++i) {
        int left_sum = 0;
        int right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += nums[j];
        }
        for (int j = i; j < nums.size(); ++j) {
            right_sum += nums[j];
        }
        
        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            index = i;
        }
    }
    
    for (int i = 0; i < index; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = index; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}