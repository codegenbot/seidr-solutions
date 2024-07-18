int main() {
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back((num / 3) - 2);
    }
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    
    cout << sum;
    
    return 0;
}