string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for (const auto& word : words) {
        int uniqueChars = set<char>(word.begin(), word.end()).size();
        
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}