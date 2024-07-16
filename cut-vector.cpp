int main() {
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < vec.size(); ++i) {
        int diff = abs(accumulate(vec.begin(), vec.begin() + i, 0) - accumulate(vec.begin() + i, vec.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << vec[i] << endl;
    }
    cout << 0 << endl;
    for (int i = cut_index; i < vec.size(); ++i) {
        cout << vec[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}