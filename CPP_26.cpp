vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> unique_numbers;
    for (int number : numbers) {
        if (find(unique_numbers.begin(), unique_numbers.end(), number) == unique_numbers.end()) {
            unique_numbers.push_back(number);
        }
    }
    return unique_numbers;
}