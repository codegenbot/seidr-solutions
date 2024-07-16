int main() {
    vector<int> input;
    int num;
    
    while (cin >> num) {
        input.push_back(num);
    }
    
    int n = input.size();
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < n; ++i) {
        int diff = abs(accumulate(input.begin(), input.begin() + i, 0) - accumulate(input.begin() + i, input.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << input[i] << endl;
    }
    cout << 0 << endl;
    for (int i = cut_index; i < n; ++i) {
        cout << input[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}