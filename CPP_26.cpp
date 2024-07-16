vector<int> uniqueNumbers;
    vector<int> counts(100001, 0);
    for (int num : numbers) {
        if (counts[num] == 0) {
            uniqueNumbers.push_back(num);
        }
        counts[num]++;
    }
    return uniqueNumbers;
}