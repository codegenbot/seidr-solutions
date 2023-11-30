string find_max(vector<string> words){
    string result = "";
    int maxUniqueChars = 0;
    
    for(const string& word : words){
        int uniqueChars = 0;
        vector<bool> charSet(26, false);
        
        for(const char& c : word){
            if(!charSet[c - 'a']){
                charSet[c - 'a'] = true;
                uniqueChars++;
            }
        }
        
        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < result)){
            maxUniqueChars = uniqueChars;
            result = word;
        }
    }
    
    return result;
}