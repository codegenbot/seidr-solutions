string find_max(vector<string> words){
    string maxWord = "";
    int maxCount = 0;
    
    for(const string& word : words){
        int uniqueCount = 0;
        vector<bool> visited(26, false);
        
        for(char c : word){
            if(!visited[c - 'a']){
                visited[c - 'a'] = true;
                uniqueCount++;
            }
        }
        
        if(uniqueCount > maxCount || (uniqueCount == maxCount && word < maxWord)){
            maxCount = uniqueCount;
            maxWord = word;
        }
    }
    
    return maxWord;
}