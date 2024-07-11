map<char, int> histogram(string test) {
    map<char, int> letterCount;
    int maxCount = 0;

    for (char letter : test) {
        if (letter == ' ') continue;
        letterCount[letter]++;
        maxCount = max(maxCount, letterCount[letter]);
    }

    map<char, int> result;
    for (const auto& pair : letterCount) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}