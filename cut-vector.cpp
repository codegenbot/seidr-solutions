int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }
    
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < input.size(); ++i) {
        int diff = abs(accumulate(input.begin(), input.begin() + i, 0) - accumulate(input.begin() + i, input.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        cout << input[i] << endl;
    }
    cout << 0 << endl;
    for (int i = cutIndex; i < input.size(); ++i) {
        cout << input[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}