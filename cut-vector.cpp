int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int total_sum = accumulate(nums.begin(), nums.end(), 0);
    int half_sum = total_sum / 2;
    int current_sum = 0;
    int idx = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        current_sum += nums[i];
        if (current_sum >= half_sum) {
            if (abs(2 * current_sum - total_sum) < abs(2 * (current_sum - nums[i]) - total_sum)) {
                idx = i;
            }
            break;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << endl;
    
    for (int i = idx + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}