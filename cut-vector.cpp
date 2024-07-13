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
    
    int half_sum = total_sum / 2;
    int left_sum = 0;
    int idx = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        left_sum += nums[i];
        if (left_sum >= half_sum) {
            idx = i;
            break;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + idx + 1);
    vector<int> right(nums.begin() + idx + 1, nums.end());
    
    for (int n : left) {
        cout << n << endl;
    }
    for (int n : right) {
        cout << n << endl;
    }
    
    return 0;
}