int main() {
    vector<int> nums;
    string line;
    while (getline(cin, line)) {
        if (line.empty()) break;
        nums.push_back(stoi(line));
    }
    
    int left_sum = 0, right_sum = accumulate(nums.begin(), nums.end(), 0);
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        left_sum += nums[i];
        right_sum -= nums[i];
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + cut_index + 1);
    vector<int> right(nums.begin() + cut_index + 1, nums.end());
    
    for (int num : left) {
        cout << num << endl;
    }
    for (int num : right) {
        cout << num << endl;
    }
    
    return 0;
}