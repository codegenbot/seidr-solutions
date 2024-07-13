int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < nums.size(); i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; j++) {
            sum1 += nums[j];
        }
        for (int j = i; j < nums.size(); j++) {
            sum2 += nums[j];
        }
        int current_diff = abs(sum1 - sum2);
        if (current_diff < diff) {
            diff = current_diff;
            idx = i;
        }
    }
    
    for (int i = 0; i <= idx; i++) {
        cout << nums[i] << endl;
    }
    for (int i = idx + 1; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }

    return 0;
}