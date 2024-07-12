int main() {
    int n, sum = 0, ans = INT_MAX;
    vector<int> nums;

    while (cin >> n) {
        nums.push_back(n);
        sum += n;
    }

    int halfSum = sum / 2;
    vector<int> sub1, sub2;

    for (int i = 0; i < nums.size(); ++i) {
        sub1.push_back(nums[i]);
        if (abs(2 * accumulate(sub1.begin(), sub1.end(), 0) - sum) < ans) {
            sub2.clear();
            for (int j = i + 1; j < nums.size(); ++j) {
                sub2.push_back(nums[j]);
            }
            ans = abs(2 * accumulate(sub1.begin(), sub1.end(), 0) - sum);
        }
    }

    for (int i = 0; i < sub1.size(); ++i) {
        cout << sub1[i] << endl;
    }

    for (int i = 0; i < sub2.size(); ++i) {
        cout << sub2[i] << endl;
    }

    return 0;
}