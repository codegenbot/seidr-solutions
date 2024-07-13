int main() {
    vector<int> vec;
    int n;
    while (cin >> n) {
        vec.push_back(n);
    }
    
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(accumulate(vec.begin(), vec.begin() + i, 0) - accumulate(vec.begin() + i, vec.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; i++) {
        cout << vec[i] << endl;
    }
    cout << endl;
    for (int i = cut_index; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
    
    return 0;
}