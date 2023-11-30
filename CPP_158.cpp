string find_max(vector<string> words){
    string maxWord = "";
    int maxUnique = 0;
    
    for(string word : words){
        int uniqueChars = 0;
        vector<bool> seen(26, false);
        
        for(char ch : word){
            if(!seen[ch - 'a']){
                uniqueChars++;
                seen[ch - 'a'] = true;
            }
        }
        
        if(uniqueChars > maxUnique || (uniqueChars == maxUnique && word < maxWord)){
            maxWord = word;
            maxUnique = uniqueChars;
        }
    }
    
    return maxWord;
}