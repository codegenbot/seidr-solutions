string find_max(vector<string> words) {
    string maxWord;
    int maxUniqueChars = 0;

    for (const string &word : words) {
        int uniqueChars = distance(word.begin(), unique(word.begin(), word.end()));
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }

    return maxWord;
}