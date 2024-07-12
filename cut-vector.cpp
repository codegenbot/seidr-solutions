int main() {
    vector<int> numbers;
    int num;
    
    while (cin >> num) {
        numbers.push_back(num);
    }
    
    int n = numbers.size();
    int idx = 0;
    int diff = INT_MAX;
    
    for (int i = 0; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        
        for (int j = 0; j < n; ++j) {
            if (j <= i) {
                sum1 += numbers[j];
            } else {
                sum2 += numbers[j];
            }
        }
        
        int cur_diff = abs(sum1 - sum2);
        if (cur_diff < diff) {
            idx = i;
            diff = cur_diff;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << numbers[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = idx + 1; i < n; ++i) {
        cout << numbers[i] << endl;
    }
    
    return 0;
}