string find_max(vector<string> words) {
    string result;
    int maxUniqueChars = 0;
    for (const auto& word : words) {
        set<char> uniqueChars(word.begin(), word.end());
        if (uniqueChars.size() > maxUniqueChars) {
            maxUniqueChars = uniqueChars.size();
            result = word;
        } else if (uniqueChars.size() == maxUniqueChars && word < result) {
            result = word;
        }
    }
    return result;
}