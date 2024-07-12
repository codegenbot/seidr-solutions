int main() {
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int n = vec.size();
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < n; i++) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j < i; j++) {
            sum_left += vec[j];
        }
        for (int j = i; j < n; j++) {
            sum_right += vec[j];
        }
        
        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; i++) {
        cout << vec[i] << endl;
    }
    cout << endl;
    for (int i = cut_index; i < n; i++) {
        cout << vec[i] << endl;
    }
    
    return 0;
}