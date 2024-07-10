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
    vector<int> result = remove_duplicates(numbers);
    vector<int> expected = {1, 2, 3, 4};
    
    bool same = issame(result, expected);
    
    return 0;
}