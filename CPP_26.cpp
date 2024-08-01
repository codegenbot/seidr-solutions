vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> uniqueNumbers(numbers.begin(), numbers.end());
    sort(uniqueNumbers.begin(), uniqueNumbers.end());
    auto it = unique(uniqueNumbers.begin(), uniqueNumbers.end());
    uniqueNumbers.erase(it, uniqueNumbers.end());
    return uniqueNumbers;
}