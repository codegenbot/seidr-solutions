int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int sum_left = 0;
        int sum_right = 0;
        
        for (int j = 0; j < i; j++) {
            sum_left += nums[j];
        }
        
        for (int j = i; j < nums.size(); j++) {
            sum_right += nums[j];
        }
        
        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; i++) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cut_index; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    
    return 0;
}