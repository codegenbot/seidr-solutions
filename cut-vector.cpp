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
    int i;
    for (i = 0; i < nums.size(); ++i) {
        currSum += nums[i];
        if (currSum >= halfSum) {
            break;
        }
    }
    
    if (abs(currSum - halfSum) < abs(currSum - halfSum + nums[i])) {
        for (int j = 0; j <= i; ++j) {
            cout << nums[j] << endl;
        }
        cout << "0" << endl;
    } else {
        for (int j = 0; j < i; ++j) {
            cout << nums[j] << endl;
        }
        cout << nums[i] << endl;
    }
    
    return 0;
}