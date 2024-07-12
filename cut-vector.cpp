int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int total = accumulate(nums.begin(), nums.end(), 0);
    int n1 = 0, n2 = 0;
    int diff = INT_MAX;
    for (int i = 0; i < nums.size(); ++i) {
        n1 += nums[i];
        n2 = total - n1;
        if (abs(n1 - n2) < diff) {
            diff = abs(n1 - n2);
        } else {
            break;
        }
    }

    for (int i = 0; i <= n; ++i) {
        cout << nums[i] << endl;
    }
    cout << n1 << endl;
    cout << n2 << endl;

    return 0;
}