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
    
    int half_sum = sum / 2;
    int left_sum = 0;
    int idx = 0;
    
    while (left_sum <= half_sum) {
        left_sum += nums[idx];
        idx++;
    }
    
    if (abs(left_sum - half_sum) < abs(left_sum - half_sum + nums[idx - 1])) {
        idx--;
        left_sum -= nums[idx];
    }
    
    for (int i = 0; i < idx; i++) {
        cout << nums[i] << endl;
    }
    
    cout << left_sum << endl;
    
    return 0;
}