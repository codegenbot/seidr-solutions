int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> result = order_by_points(nums);
    for (const auto& num : result) {
        cout << num << " ";
    }
    return 0;
}