int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int leftSum = 0, rightSum = 0;
    int leftIdx = 0, rightIdx = n - 1;
    
    while (leftIdx < rightIdx) {
        if (leftSum < rightSum) {
            leftSum += nums[leftIdx++];
        } else {
            rightSum += nums[rightIdx--];
        }
    }
    
    cout << leftIdx << endl;
    for (int i = 0; i < leftIdx; ++i) {
        cout << nums[i] << endl;
    }
    cout << rightSum << endl;
    
    return 0;
}