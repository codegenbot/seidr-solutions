int main() {
    vector<int> numbers;
    int n;
    while (cin >> n) {
        numbers.push_back(n);
    }
    
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 1; i < numbers.size(); ++i) {
        int diff = abs(accumulate(numbers.begin(), numbers.begin() + i, 0) - accumulate(numbers.begin() + i, numbers.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << numbers[i] << endl;
    }
    cout << 0 << endl;
    
    for (int i = cut_index; i < numbers.size(); ++i) {
        cout << numbers[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}