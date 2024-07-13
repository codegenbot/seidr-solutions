int fuel_cost(const vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += max(0, num / 3 - 2);
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << fuel_cost(nums) << endl;
    return 0;
}