vector<int> remove_duplicates(vector<int> numbers) {
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(vector<int> a, vector<int> b) {
    return (a == b);
}

int main() {
    vector<int> numbers = {1, 2, 2, 3, 4, 4, 5};
    
    vector<int> unique_numbers = remove_duplicates(numbers);
    
    for (auto num : unique_numbers) {
        cout << num << " ";
    }
    
    return 0;
}