custom::vector<int> remove_duplicates(custom::vector<int> numbers) {
    custom::sort(numbers.begin(), numbers.end());
    numbers.erase(custom::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}