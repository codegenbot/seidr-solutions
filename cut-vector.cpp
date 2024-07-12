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
    int runningSum = 0;
    int idx = 0;
    for (; idx < nums.size(); ++idx) {
        runningSum += nums[idx];
        if (runningSum >= target) {
            break;
        }
    }
    
    if (abs(runningSum - target) < abs(sum - runningSum - target)) {
        for (int i = 0; i <= idx; ++i) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    } else {
        for (int i = 0; i <= idx; ++i) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    }
    
    return 0;
}