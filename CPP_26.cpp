vector<int> uniqueNumbers;
    for (int num : numbers) {
        if (count(numbers.begin(), numbers.end(), num) == 1) {
            uniqueNumbers.push_back(num);
        }
    }
    return uniqueNumbers;
}