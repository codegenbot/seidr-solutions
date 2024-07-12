int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    
    int half_sum = sum / 2;
    int prefix_sum = 0;
    int cut_idx = -1;
    
    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        if (prefix_sum >= half_sum) {
            cut_idx = i;
            break;
        }
    }
    
    if (abs(sum - 2 * prefix_sum) < abs(sum - 2 * (prefix_sum - nums[cut_idx]))) {
        cout << "1\n";
        for (int i = 0; i <= cut_idx; ++i) {
            cout << nums[i] << "\n";
        }
        cout << "0\n";
    } else {
        cout << "1\n";
        for (int i = 0; i < cut_idx; ++i) {
            cout << nums[i] << "\n";
        }
        cout << nums[cut_idx] << "\n0\n";
    }
    
    return 0;
}