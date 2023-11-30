string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for(const string& word : words){
        int uniqueChars = 0;
        vector<char> charCount(26, 0); // vector to count occurrences of each character
        
        for(char c : word){
            if(charCount[c - 'a'] == 0){
                uniqueChars++;
            }
            charCount[c - 'a']++;
        }
        
        if(uniqueChars > maxUniqueChars || 
           (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}