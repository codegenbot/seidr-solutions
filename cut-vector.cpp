int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int half_sum = sum / 2;
    int prefix_sum = 0;
    int idx = -1;
    
    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        if (prefix_sum >= half_sum) {
            idx = i;
            break;
        }
    }
    
    vector<int> subvec1(nums.begin(), nums.begin() + idx + 1);
    vector<int> subvec2(nums.begin() + idx + 1, nums.end());
    
    for (int num : subvec1) {
        cout << num << endl;
    }
    for (int num : subvec2) {
        cout << num << endl;
    }
    
    return 0;
}