vector<int> uniqueNumbers;
    for (int i = 0; i < numbers.size(); ++i) {
        if (count(numbers.begin(), numbers.end(), numbers[i]) == 1) {
            uniqueNumbers.push_back(numbers[i]);
        }
    }
    
    return uniqueNumbers;
}