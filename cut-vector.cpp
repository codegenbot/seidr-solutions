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
    
    int target = sum / 2;
    int prefix_sum = 0;
    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        if (prefix_sum >= target) {
            cout << "1\n";
            for (int j = 0; j <= i; j++) {
                cout << nums[j] << "\n";
            }
            cout << target - (prefix_sum - nums[i]) << "\n";
            break;
        }
    }
    
    return 0;
}