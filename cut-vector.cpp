int main() {
    vector<int> nums;
    int n;
    cin >> n;
    nums.push_back(n);

    int left_sum = 0, right_sum = 0;
    int left_index = 0, right_index = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        right_sum += nums[i];
    }
    
    for (int i = 0; i < nums.size(); ++i) {
        right_sum -= nums[i];
        
        if (left_sum == right_sum || abs(left_sum - right_sum) < abs(left_sum - right_sum + nums[i])) {
            right_index = i;
            break;
        }
        
        left_sum += nums[i];
    }
    
    for (int i = 0; i <= right_index; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = right_index + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}