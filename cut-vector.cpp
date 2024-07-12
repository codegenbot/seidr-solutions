int main() {
    int n, sum = 0;
    vector<int> nums;
    
    while (cin >> n) {
        nums.push_back(n);
        sum += n;
    }
    
    int target = sum / 2;
    int currSum = 0, idx = 0;
    for (int i = 0; i < nums.size(); ++i) {
        currSum += nums[i];
        if (currSum >= target) {
            idx = i;
            break;
        }
    }
    
    vector<int> firstHalf(nums.begin(), nums.begin() + idx + 1);
    vector<int> secondHalf(nums.begin() + idx + 1, nums.end());
    
    for (int num : firstHalf) {
        cout << num << endl;
    }
    for (int num : secondHalf) {
        cout << num << endl;
    }
    
    return 0;
}