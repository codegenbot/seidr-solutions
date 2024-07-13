int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int halfSum = sum / 2;
    int currSum = 0;
    int cutIdx = -1;
    for (int i = 0; i < n; ++i) {
        currSum += nums[i];
        if (currSum >= halfSum) {
            cutIdx = i;
            break;
        }
    }
    
    if (cutIdx == -1) {
        cout << nums[0] << endl << 0 << endl;
    } else {
        cout << nums[0] << endl;
        for (int i = 1; i <= cutIdx; ++i) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    }
    
    return 0;
}