string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for (string word : words) {
        int uniqueChars = 0;
        bool visited[26] = {false};
        
        for (char ch : word) {
            if (!visited[ch - 'a']) {
                visited[ch - 'a'] = true;
                uniqueChars++;
            }
        }
        
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}