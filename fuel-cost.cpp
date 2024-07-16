int fuel_cost(const vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += max(num / 3 - 2, 0);
    }
    return sum;
}
int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    cout << fuel_cost(nums) << endl;
    return 0;
}