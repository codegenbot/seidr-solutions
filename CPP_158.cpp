string find_max(vector<string> words){
    string maxWord = words[0];
    int maxCount = 0;
    
    for (string word : words) {
        int count = 0;
        vector<bool> charExists(26, false);
        
        for (char c : word) {
            if (!charExists[c - 'a']) {
                count++;
                charExists[c - 'a'] = true;
            }
        }
        
        if (count > maxCount || (count == maxCount && word < maxWord)) {
            maxCount = count;
            maxWord = word;
        }
    }
    
    return maxWord;
}