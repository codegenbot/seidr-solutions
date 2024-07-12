int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    
    int best_diff = INT_MAX;
    int cut_idx = 0;
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < best_diff) {
            best_diff = diff;
            cut_idx = i;
        }
        if (diff == 0) {
            break;
        }
    }
    
    for (int i = 0; i < cut_idx; i++) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    for (int i = cut_idx; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    
    return 0;
}