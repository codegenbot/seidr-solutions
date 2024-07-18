string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    for (const string& word : words) {
        int uniqueCharsCount = set<char>(word.begin(), word.end()).size();
        if (uniqueCharsCount > maxUniqueChars || 
            (uniqueCharsCount == maxUniqueChars && word < maxWord)) {
            maxWord = word;
            maxUniqueChars = uniqueCharsCount;
        }
    }
    return maxWord;
}