string find_max(vector<string> words) {
    string maxWord = "";
    int maxUniqueChars = 0;

    for (const auto& word : words) {
        set<char> uniqueChars(word.begin(), word.end());
        if (uniqueChars.size() > maxUniqueChars) {
            maxUniqueChars = uniqueChars.size();
            maxWord = word;
        } else if (uniqueChars.size() == maxUniqueChars && word < maxWord) {
            maxWord = word;
        }
    }

    return maxWord;
}