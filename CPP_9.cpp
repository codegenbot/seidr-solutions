bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers);

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
    vector<int> test1 = {1, 3, 5, 2, 7, 4};
    vector<int> expected1 = {5, 7, 7, 7, 7, 4};
    vector<int> result1 = rolling_max(test1);

    cout << "Test Case 1: " << (issame(result1, expected1) ? "Passed" : "Failed") << endl;

    return 0;
}