int basement(vector<int> &nums) {
    int sum = 0;
    int i = 0;
    while (i < nums.size()) {
        sum += nums[i];
        if (sum < 0) return i;
        i++;
    }
    return -1; // or some suitable value indicating no such index exists
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << basement(nums) << endl;
    return 0;
}