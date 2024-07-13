int main() {
    vector<int> input;
    int num;
    
    while (cin >> num) {
        input.push_back(num);
    }
    
    int n = input.size();
    int idx = 0;
    int minDiff = INT_MAX;
    
    for (int i = 1; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        
        for (int j = 0; j < i; ++j) {
            sum1 += input[j];
        }
        
        for (int j = i; j < n; ++j) {
            sum2 += input[j];
        }
        
        int diff = abs(sum2 - sum1);
        if (diff < minDiff) {
            minDiff = diff;
            idx = i;
        }
        
        if (diff == 0) {
            break;
        }
    }
    
    for (int i = 0; i < idx; ++i) {
        cout << input[i] << endl;
    }
    
    cout << endl;
    
    for (int i = idx; i < n; ++i) {
        cout << input[i] << endl;
    }
    
    return 0;
}