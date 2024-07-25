vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    vector<int> numbers = {1, 2, 2, 3, 4, 4, 5};
    numbers = remove_duplicates(numbers);
    for (int num : numbers) {
        cout << num << " ";
    }
    return 0;
}