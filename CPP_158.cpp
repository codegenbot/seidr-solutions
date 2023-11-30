string find_max(vector<string> words){
    string maxWord = "";
    int maxUnique = 0;
    
    for(string word : words){
        sort(word.begin(), word.end());
        word.erase(unique(word.begin(), word.end()), word.end());
        if(word.size() > maxUnique || (word.size() == maxUnique && word < maxWord)){
            maxUnique = word.size();
            maxWord = word;
        }
    }
    
    return maxWord;
}