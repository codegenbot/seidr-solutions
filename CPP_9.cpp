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
    vector<int> test_input = {1, 3, 5, 2, 6};
    vector<int> expected_output = {5, 5, 6, 6};

    vector<int> result = rolling_max(test_input);
    bool is_same_result = issame(result, expected_output);

    return 0;
}