string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for(const auto& word : words){
        int uniqueChars = 0;
        bool chars[26] = {false};
        
        for(const auto& ch : word){
            if(!chars[ch - 'a']){
                chars[ch - 'a'] = true;
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