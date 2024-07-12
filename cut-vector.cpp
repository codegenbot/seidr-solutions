int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int total = 0;
    for (int n : nums) {
        total += n;
    }
    
    int sum = 0;
    int idx = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum >= (total + 1) / 2) {
            idx = i;
            break;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}