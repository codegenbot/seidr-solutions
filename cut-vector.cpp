int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int half_sum = sum / 2;
    int cur_sum = 0;
    int idx = 0;
    for (int i = 0; i < nums.size(); ++i) {
        cur_sum += nums[i];
        if (cur_sum >= half_sum) {
            if (abs(half_sum - 2 * cur_sum) < abs(half_sum - 2 * (cur_sum - nums[i]))) {
                idx = i;
                break;
            } else {
                idx = i - 1;
                break;
            }
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = idx + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}