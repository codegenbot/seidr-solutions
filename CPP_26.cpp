vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

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

int main() {
    vector<int> numbers = {3, 1, 2, 2, 4, 3};
    vector<int> expected_result = {1, 2, 3, 4};

    vector<int> modified_numbers = remove_duplicates(numbers);

    if (issame(modified_numbers, expected_result)) {
        // Output matches expected result
    } else {
        // Output does not match expected result
    }

    return 0;
}