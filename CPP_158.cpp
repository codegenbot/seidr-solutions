string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for(const string& word : words){
        int uniqueChars = 0;
        bool charExists[26] = {false}; // Assuming only lowercase letters
        
        for(char c : word){
            if(!charExists[c - 'a']){
                charExists[c - 'a'] = true;
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