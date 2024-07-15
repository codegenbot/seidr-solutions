int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += (nums[i] / 3) - 2;
    }

    cout << sum << endl;

    return 0;
}