int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }
    
    int total_sum = accumulate(input.begin(), input.end(), 0);
    int left_sum = 0;
    int right_sum = total_sum;
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < input.size(); ++i) {
        left_sum += input[i];
        right_sum -= input[i];
        
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff || (diff == min_diff && cut_index == -1)) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left_vec(input.begin(), input.begin() + cut_index + 1);
    vector<int> right_vec(input.begin() + cut_index + 1, input.end());
    
    for (int num : left_vec) {
        cout << num << endl;
    }
    for (int num : right_vec) {
        cout << num << endl;
    }
    
    return 0;
}