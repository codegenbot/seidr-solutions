vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> uniqueNumbers(numbers.begin(), numbers.end());
    sort(uniqueNumbers.begin(), uniqueNumbers.end());
    auto last = unique(uniqueNumbers.begin(), uniqueNumbers.end());
    uniqueNumbers.erase(last, uniqueNumbers.end());
    return uniqueNumbers;
}