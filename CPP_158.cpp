string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for (string word : words) {
        int uniqueChars = 0;
        bool charCount[26] = {false};
        
        for (char c : word) {
            if (!charCount[c - 'a']) {
                uniqueChars++;
                charCount[c - 'a'] = true;
            }
        }
        
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}