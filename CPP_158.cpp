string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for(string word : words){
        int uniqueChars = 0;
        sort(word.begin(), word.end());
        word.erase(unique(word.begin(), word.end()), word.end());
        uniqueChars = word.size();
        
        if(uniqueChars > maxUniqueChars){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
        else if(uniqueChars == maxUniqueChars && word < maxWord){
            maxWord = word;
        }
    }
    
    return maxWord;
}