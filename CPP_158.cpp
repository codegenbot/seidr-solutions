string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for(const string& word : words){
        int uniqueChars = 0;
        vector<bool> charSet(26, false);
        
        for(char c : word){
            if(!charSet[c - 'a']){
                uniqueChars++;
                charSet[c - 'a'] = true;
            }
        }
        
        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}