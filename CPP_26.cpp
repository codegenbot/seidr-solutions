bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> remove_duplicates(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    vector<int> numbers = {4, 2, 3, 2, 1, 3, 4};
    numbers = remove_duplicates(numbers);
    
    for (int num : numbers) {
        cout << num << " ";
    }
    
    return 0;
}