vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> uniqueNumbers;
    for (int num : numbers) {
        if (count(uniqueNumbers.begin(), uniqueNumbers.end(), num) == 0)
            uniqueNumbers.push_back(num);
    }
    return uniqueNumbers;
}