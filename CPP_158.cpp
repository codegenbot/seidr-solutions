unordered_map<char, int> countUniqueChars(const string& word) {
    unordered_map<char, int> charCount;
    for (char c : word) {
        charCount[c]++;
    }
    return charCount;
}

string find_max(vector<string> words) {
    string maxWord = "";
    int maxUniqueChars = 0;

    for (const string& word : words) {
        unordered_map<char, int> charCount = countUniqueChars(word);
        int uniqueChars = charCount.size();

        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxWord = word;
            maxUniqueChars = uniqueChars;
        }
    }

    return maxWord;
}