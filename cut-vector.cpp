int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
 
    int idx = 0;
    int min_diff = INT_MAX;
    for (int i = 1; i < nums.size(); ++i) {
        int diff = abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < min_diff) {
            idx = i;
            min_diff = diff;
        }
        if (diff == 0) break;
    }

    for (int i = 0; i < idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;

    for (int i = idx; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}