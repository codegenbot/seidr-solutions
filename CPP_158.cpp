string find_max(vector<string> words){
    string result = "";
    int maxUniqueChars = 0;
    
    for(string word : words){
        int uniqueChars = 0;
        bool charCount[26] = {false};
        
        for(char c : word){
            if(!charCount[c - 'a']){
                charCount[c - 'a'] = true;
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