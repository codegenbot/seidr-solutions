string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for(string word : words){
        int uniqueChars = 0;
        vector<bool> present(26, false);
        
        for(char c : word){
            if(!present[c - 'a']){
                uniqueChars++;
                present[c - 'a'] = true;
            }
        }
        
        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}