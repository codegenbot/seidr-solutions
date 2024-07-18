int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int total = 0;
    for (int num : nums) {
        total += (num / 3) - 2;
    }

    cout << total << endl;

    return 0;
}