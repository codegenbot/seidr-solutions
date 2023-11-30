string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for(auto word : words){
        int uniqueChars = 0;
        vector<char> charCount(26, 0);
        
        for(auto ch : word){
            if(charCount[ch - 'a'] == 0){
                charCount[ch - 'a'] = 1;
                uniqueChars++;
            }
        }
        
        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}