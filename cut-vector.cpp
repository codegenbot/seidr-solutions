int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int half_sum = 0, total_sum = accumulate(nums.begin(), nums.end(), 0);
    
    for (int i = 0; i < nums.size(); i++) {
        half_sum += nums[i];
        if (half_sum * 2 >= total_sum) {
            if (half_sum * 2 == total_sum || abs(half_sum * 2 - total_sum) <= abs(half_sum * 2 - nums[i] * 2)) {
                for (int j = 0; j <= i; j++) {
                    cout << nums[j] << endl;
                }
                cout << 0 << endl;
                break;
            } else {
                half_sum -= nums[i];
            }
        }
    }
    
    return 0;
}