int main() {
    vector<int> input;
    int num;
    
    while (cin >> num) {
        input.push_back(num);
    }
    
    int minDiff = INT_MAX;
    int index = 0;
    
    for (int i = 1; i < input.size(); ++i) {
        int diff = abs(accumulate(input.begin(), input.begin() + i, 0) - accumulate(input.begin() + i, input.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    for (int i = 0; i < index; ++i) {
        cout << input[i] << endl;
    }
    
    cout << endl;
    
    for (int i = index; i < input.size(); ++i) {
        cout << input[i] << endl;
    }
    
    return 0;
}