bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int n = numbers.size();
    for (int i = 0; i < n; ++i) {
        int window_size = min(3, n - i); // Considering a window size of 3 for rolling maximum
        int max_val = *max_element(numbers.begin() + i, numbers.begin() + i + window_size);
        result.push_back(max_val);
    }
    return result;
}

int main() {
    vector<int> numbers = {1, 3, 5, 4, 2};
    
    vector<int> expected_result = {5, 5, 5, 4, 2};
    vector<int> result = rolling_max(numbers);
    
    bool same = issame(result, expected_result);
    
    return 0;
}