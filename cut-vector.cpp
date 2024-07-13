int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }

    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
    }

    int target = sum / 2;
    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        int diff = abs(prefixSum - target);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> subVector1(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> subVector2(nums.begin() + cutIndex + 1, nums.end());

    for (int num : subVector1) {
        cout << num << endl;
    }

    for (int num : subVector2) {
        cout << num << endl;
    }

    return 0;
}