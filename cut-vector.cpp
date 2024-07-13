int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int mid = n / 2;
    
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < mid; ++i) {
        sum1 += nums[i];
    }
    for (int i = mid; i < n; ++i) {
        sum2 += nums[i];
    }
    
    if (sum1 == sum2 || abs(sum1 - sum2) <= nums[mid]) {
        for (int i = 0; i < mid; ++i) {
            cout << nums[i] << endl;
        }
        cout << nums[mid] << endl;
        for (int i = mid + 1; i < n; ++i) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    } else {
        cout << nums[0] << endl;
        cout << sum1 << endl;
        cout << sum2 << endl;
    }
    
    return 0;
}