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

    vector<int> subvec1(nums.begin(), nums.begin() + idx + 1);
    vector<int> subvec2(nums.begin() + idx + 1, nums.end());

    for (int n : subvec1) {
        cout << n << endl;
    }
    for (int n : subvec2) {
        cout << n << endl;
    }

    return 0;
}