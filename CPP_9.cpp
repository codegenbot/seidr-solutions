bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int n = numbers.size();
    for (int i = 0; i < n; ++i) {
        int max_val = numbers[i];
        for (int j = i + 1; j < n; ++j) {
            if (numbers[j] > max_val) {
                max_val = numbers[j];
            }
        }
        result.push_back(max_val);
    }
    return result;
}

int main() {
    vector<int> numbers = {1, 3, 5, 4, 2};
    vector<int> expected_result = {5, 5, 5, 4, 2};
    vector<int> result = rolling_max(numbers);
    
    if (issame(result, expected_result)) {
        cout << "Result matches expected output." << endl;
    } else {
        cout << "Result does not match expected output." << endl;
    }
    
    return 0;
}