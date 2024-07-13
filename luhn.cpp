int main() {
    vector<int> nums(16);
    for (int i = 0; i < 16; ++i) {
        cin >> nums[i];
    }

    int sum = 0;
    for (int i = 1; i <= 16; ++i) {
        if (i % 2 == 0) {
            int num = nums[i-1] * 2;
            sum += (num > 9) ? num - 9 : num;
        } else {
            sum += nums[i-1];
        }
    }

    cout << sum << endl;

    return 0;
}