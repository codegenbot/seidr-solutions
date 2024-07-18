bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    // Test the remove_duplicates function
    vector<int> test_input = {1, 2, 3, 1, 2, 4, 5, 3};
    vector<int> result = remove_duplicates(test_input);
    
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}