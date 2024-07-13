int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int total_sum = 0;
    for (int num : nums) {
        total_sum += num;
    }
    
    int target_sum = total_sum / 2;
    int curr_sum = 0;
    int cut_index = -1;
    for (int i = 0; i < n; ++i) {
        curr_sum += nums[i];
        if (curr_sum >= target_sum) {
            cut_index = i;
            break;
        }
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + cut_index + 1);
    vector<int> subvector2(nums.begin() + cut_index + 1, nums.end());
    
    cout << subvector1.size() << endl;
    for (int num : subvector1) {
        cout << num << endl;
    }
    
    cout << subvector2.size() << endl;
    for (int num : subvector2) {
        cout << num << endl;
    }
    
    return 0;
}