int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += num;
    }

    int halfSum = sum / 2;
    int currSum = 0;
    int index = 0;
    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        if (currSum >= halfSum) {
            if (currSum == halfSum || abs(currSum - halfSum) < abs(sum - 2 * currSum)) {
                index = i;
            }
            break;
        }
    }

    for (int i = 0; i <= index; i++) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;

    return 0;
}