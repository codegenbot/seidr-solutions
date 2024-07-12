int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int total = 0;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        total += nums[i];
    }
    
    int half = total / 2;
    int sum = 0;
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        if (sum >= half) {
            idx = i;
            break;
        }
    }
    
    if (sum == half) {
        for (int i = 0; i <= idx; ++i) {
            cout << nums[i] << endl;
        }
        cout << "0" << endl;
    } else {
        if (abs(2 * sum - total) < abs(2 * (sum - nums[idx]) - total)) {
            for (int i = 0; i <= idx; ++i) {
                cout << nums[i] << endl;
            }
            cout << "0" << endl;
        } else {
            for (int i = 0; i <= idx; ++i) {
                cout << nums[i] << endl;
            }
            cout << nums[idx] << endl;
        }
    }
    
    return 0;
}