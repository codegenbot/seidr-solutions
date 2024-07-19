string find_max(vector<string> words){
    string result = "";
    int maxUniqueChars = 0;
    
    for(string word : words){
        set<char> uniqueChars(word.begin(), word.end());
        if(uniqueChars.size() > maxUniqueChars){
            maxUniqueChars = uniqueChars.size();
            result = word;
        }
        else if(uniqueChars.size() == maxUniqueChars){
            result = min(result, word);
        }
    }
    
    return result;
}