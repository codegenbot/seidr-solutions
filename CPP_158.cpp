string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for(string word : words){
        unordered_set<char> uniqueChars(word.begin(), word.end());
        if(uniqueChars.size() > maxUniqueChars){
            maxUniqueChars = uniqueChars.size();
            maxWord = word;
        }
    }
    
    return maxWord;
}