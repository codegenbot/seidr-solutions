string find_max(vector<string> words){
    string result = *words.begin();
    int maxUniqueChars = 0;
    for (const auto& word : words) {
        int uniqueChars = 0;
        set<char> charSet(word.begin(), word.end());
        if (charSet.size() > maxUniqueChars) {
            maxUniqueChars = charSet.size();
            result = word;
        } else if (charSet.size() == maxUniqueChars && word < result) {
            result = word;
        }
    }
    return result;
}