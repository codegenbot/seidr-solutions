int main() {
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < vec.size(); ++i) {
        int sum_left = accumulate(vec.begin(), vec.begin() + i, 0);
        int sum_right = accumulate(vec.begin() + i, vec.end(), 0);
        
        int diff = abs(sum_left - sum_right);
        
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
        
        if (diff == 0) {
            break;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << vec[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cut_index; i < vec.size(); ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}