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
    
    int half_sum = sum / 2;
    int prefix_sum = 0;
    int cut_idx = 0;
    
    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        if (prefix_sum >= half_sum) {
            cut_idx = i + 1;
            break;
        }
    }
    
    cout << "1" << endl;
    for (int i = 0; i < cut_idx; i++) {
        cout << nums[i] << endl;
    }
    cout << "0" << endl;
    
    return 0;
}