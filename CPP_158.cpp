string find_max(vector<string> words) {
    string maxWord = "";
    int maxUniqueChars = 0;

    for (const string& word : words) {
        int uniqueChars = set<char>(word.begin(), word.end()).size();
        
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxWord = word;
            maxUniqueChars = uniqueChars;
        }
    }

    return maxWord;
}