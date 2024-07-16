int main() {
    vector<int> nums;
    int num;
    
    while(cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int prefixSum = 0;
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        if (prefixSum * 2 >= sum) {
            cout << i + 1 << endl;
            for (int j = 0; j <= i; j++) {
                cout << nums[j] << endl;
            }
            for (int j = i + 1; j < n; j++) {
                cout << nums[j] << endl;
            }
            break;
        }
    }
    
    return 0;
}