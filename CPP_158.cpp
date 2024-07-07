string find_max(vector<string> words){
    string maxWord = *min_element(words.begin(), words.end());
    int maxUniqueChars = 0;
    for (const auto &word : words) {
        set<char> uniqueChars(word.begin(), word.end());
        if (uniqueChars.size() > maxUniqueChars) {
            maxWord = word;
            maxUniqueChars = uniqueChars.size();
        }
    }
    return maxWord;
}