int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int prefixSum = 0;
    for (int i = 0; i < n; i++) {
        if (prefixSum * 2 >= sum) {
            cout << i << endl;
            for (int j = 0; j < i; j++) {
                cout << nums[j] << endl;
            }
            cout << "0" << endl;
            break;
        }
        prefixSum += nums[i];
    }
    
    return 0;
}