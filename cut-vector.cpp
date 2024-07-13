int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }
    
    int halfSum = totalSum / 2;
    int leftSum = 0;
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        if (leftSum >= halfSum) {
            cutIndex = i;
            break;
        }
    }
    
    if (cutIndex == -1) {
        cout << n << "\n";
        for (int i = 0; i < n; i++) {
            cout << nums[i] << "\n";
        }
        cout << "0\n";
    } else {
        cout << cutIndex + 1 << "\n";
        for (int i = 0; i <= cutIndex; i++) {
            cout << nums[i] << "\n";
        }
        cout << "0\n";
    }
    
    return 0;
}