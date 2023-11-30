string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueCharCount = 0;
    
    for(string word : words){
        int uniqueCharCount = 0;
        bool visited[26] = {false};
        
        for(char c : word){
            if(!visited[c - 'a']){
                visited[c - 'a'] = true;
                uniqueCharCount++;
            }
        }
        
        if(uniqueCharCount > maxUniqueCharCount || (uniqueCharCount == maxUniqueCharCount && word < maxWord)){
            maxWord = word;
            maxUniqueCharCount = uniqueCharCount;
        }
    }
    
    return maxWord;
}