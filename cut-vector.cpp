int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }
    
    int n = input.size();
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 1; i < n; ++i) {
        int sum_left = accumulate(input.begin(), input.begin() + i, 0);
        int sum_right = accumulate(input.begin() + i, input.end(), 0);
        int diff = abs(sum_left - sum_right);
        
        if (diff < min_diff || (diff == min_diff && sum_left == sum_right)) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << input[i] << endl;
    }
    cout << endl;
    for (int i = cut_index; i < n; ++i) {
        cout << input[i] << endl;
    }
    
    return 0;
}