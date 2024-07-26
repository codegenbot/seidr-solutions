map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
        }
    }
    map<char, int> mostRepeatingLetters;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            mostRepeatingLetters.emplace(pair.first, pair.second);
        }
    }
    return mostRepeatingLetters;
}