int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    int sum = 0;
    for (int n : nums) {
        sum += n;
    }

    int target = sum / 2;
    int currSum = 0;
    int idx = 0;
    for (int i = 0; i < nums.size(); ++i) {
        currSum += nums[i];
        if (currSum >= target) {
            idx = i;
            break;
        }
    }

    if (abs(sum - 2 * currSum) < abs(sum - 2 * (currSum - nums[idx]))) {
        for (int i = 0; i <= idx; ++i) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    } else {
        for (int i = 0; i <= idx - 1; ++i) {
            cout << nums[i] << endl;
        }
        cout << nums[idx] << endl;
    }

    return 0;
}