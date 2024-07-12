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

    int target = sum / 2;
    int currSum = 0;
    int i = 0;
    for (i = 0; i < nums.size(); ++i) {
        currSum += nums[i];
        if (currSum >= target) {
            break;
        }
    }

    vector<int> subvec1(nums.begin(), nums.begin() + i + 1);
    vector<int> subvec2(nums.begin() + i + 1, nums.end());

    for (int num : subvec1) {
        cout << num << endl;
    }
    for (int num : subvec2) {
        cout << num << endl;
    }

    return 0;
}