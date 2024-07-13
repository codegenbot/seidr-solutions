int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int idx = 0;
    int diff = INT_MAX;
    for (int i = 1; i < nums.size(); i++) {
        if (abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0)) < diff) {
            diff = abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0));
            idx = i;
        }
    }
    
    for (int i = 0; i < idx; i++) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = idx; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    
    return 0;
}