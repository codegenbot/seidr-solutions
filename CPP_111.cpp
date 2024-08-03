map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string str = test;
    for (char c : str) {
        if (!isalpha(c)) continue; // Ignore non-alphabets

        char letter = tolower(c); // Convert to lowercase
        if (result.find(letter) == result.end())
            result[letter] = 1; // First occurrence, count is 1
        else
            result[letter]++;
    }

    map<char, int> maxCountMap;
    int maxCount = 0;

    for (auto& pair : result) {
        if (pair.second > maxCount)
            maxCount = pair.second;
    }

    for (auto& pair : result) {
        if (pair.second == maxCount)
            maxCountMap[pair.first] = pair.second;
    }

    return maxCountMap;
}