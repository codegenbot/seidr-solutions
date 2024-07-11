bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> remove_duplicates(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

// Test the remove_duplicates function
vector<int> numbers = {1, 2, 2, 3, 4, 4, 5};
vector<int> expected = {1, 2, 3, 4, 5};
vector<int> result = remove_duplicates(numbers);
bool test_result = issame(result, expected);