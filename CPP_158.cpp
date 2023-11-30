string find_max(vector<string> words){
    string maxWord = "";
    int maxUnique = 0;
    
    for (string word : words) {
        int uniqueChars = 0;
        bool chars[26] = {false};
        
        for (char c : word) {
            if (!chars[c - 'a']) {
                chars[c - 'a'] = true;
                uniqueChars++;
            }
        }
        
        if (uniqueChars > maxUnique || (uniqueChars == maxUnique && word < maxWord)) {
            maxWord = word;
            maxUnique = uniqueChars;
        }
    }
    
    return maxWord;
}