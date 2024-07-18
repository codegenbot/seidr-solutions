bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    vector<int> numbers = {1, 2, 2, 3, 4, 4, 5};
    vector<int> unique_numbers = remove_duplicates(numbers);
    for (int num : unique_numbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}