string find_max(vector<string> words){
    string maxWord = "";
    int maxChars = 0;
    
    for(const string& word : words){
        int uniqueChars = 0;
        
        sort(word.begin(), word.end());
        word.erase(unique(word.begin(), word.end()), word.end());
        
        uniqueChars = word.size();
        
        if(uniqueChars > maxChars || (uniqueChars == maxChars && (word.compare(maxWord) < 0))){
            maxChars = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}