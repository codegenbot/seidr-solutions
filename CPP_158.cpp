string find_max(vector<string> words){
    string maxWord = "";
    int maxUnique = 0;
    
    for (string word : words) {
        int uniqueChars = 0;
        bool visited[26] = {false}; // assuming only lowercase alphabets
        
        for (char c : word) {
            if (!visited[c - 'a']) {
                visited[c - 'a'] = true;
                uniqueChars++;
            }
        }
        
        if (uniqueChars > maxUnique || (uniqueChars == maxUnique && word < maxWord)) {
            maxUnique = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}