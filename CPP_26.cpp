vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> numbers = {4, 2, 1, 2, 4, 3, 1};
    vector<int> expected_result = {1, 2, 3, 4};
    
    vector<int> modified_numbers = remove_duplicates(numbers);
    
    if (issame(modified_numbers, expected_result)) {
        cout << "Output matches expected result." << endl;
    } else {
        cout << "Output does not match expected result." << endl;
    }
    
    return 0;
}