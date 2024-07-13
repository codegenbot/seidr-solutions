int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }
    
    int idx = 0;
    int min_diff = INT_MAX;
    for (int i = 0; i < input.size() - 1; ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j <= i; ++j) {
            left_sum += input[j];
        }
        for (int j = i + 1; j < input.size(); ++j) {
            right_sum += input[j];
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << input[i] << endl;
    }
    cout << endl;
    for (int i = idx + 1; i < input.size(); ++i) {
        cout << input[i] << endl;
    }
    
    return 0;
}