int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    int total = 0;
    for (int n : nums) {
        total += n;
    }

    int half = total / 2;
    int sum = 0;
    int idx = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum >= half) {
            idx = i;
            break;
        }
    }

    vector<int> sub1(nums.begin(), nums.begin() + idx + 1);
    vector<int> sub2(nums.begin() + idx + 1, nums.end());

    for (int n : sub1) {
        cout << n << endl;
    }
    for (int n : sub2) {
        cout << n << endl;
    }

    return 0;
}