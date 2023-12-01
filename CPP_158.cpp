string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for(string word : words){
        int uniqueChars = 0;
        sort(word.begin(), word.end());
        
        for(int i = 0; i < word.length(); i++){
            if(i == 0 || word[i] != word[i-1]){
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