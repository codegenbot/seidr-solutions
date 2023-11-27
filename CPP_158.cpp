string find_max(vector<string> words){
    string maxWord = "";
    int maxUnique = 0;
    
    for(string word : words){
        int uniqueChars = 0;
        sort(word.begin(), word.end()); // Sort the word to easily count unique characters
        
        for(int i = 0; i < word.length(); i++){
            if(i == 0 || word[i] != word[i-1]){
                uniqueChars++;
            }
        }
        
        if(uniqueChars > maxUnique || (uniqueChars == maxUnique && word < maxWord)){
            maxWord = word;
            maxUnique = uniqueChars;
        }
    }
    
    return maxWord;
}