int main() {
    vector<int> vec;
    int num;
    
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int n = vec.size();
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 1; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        
        for (int j = 0; j < i; ++j) {
            sum1 += vec[j];
        }
        
        for (int j = i; j < n; ++j) {
            sum2 += vec[j];
        }
        
        int currentDiff = abs(sum1 - sum2);
        
        if (currentDiff < diff) {
            diff = currentDiff;
            idx = i;
        }
    }
    
    for (int i = 0; i < idx; ++i) {
        cout << vec[i] << endl;
    }
    
    cout << endl;
    
    for (int i = idx; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}