int main() {
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 1; i < vec.size(); ++i) {
        int sum_left = accumulate(vec.begin(), vec.begin() + i, 0);
        int sum_right = accumulate(vec.begin() + i, vec.end(), 0);
        
        int current_diff = abs(sum_left - sum_right);
        
        if (current_diff < min_diff || (current_diff == min_diff && sum_left == sum_right)) {
            min_diff = current_diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << vec[i] << endl;
    }
    
    cout << "0" << endl;
    
    for (int i = cut_index; i < vec.size(); ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}