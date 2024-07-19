string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for (const auto& word : words) {
        int uniqueChars = unordered_set<char>(word.begin(), word.end()).size();
        
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxWord = word;
            maxUniqueChars = uniqueChars;
        }
    }

    return maxWord;
}