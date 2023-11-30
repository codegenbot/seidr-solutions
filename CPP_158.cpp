string find_max(vector<string> words){
    string result = "";
    int maxUniqueChars = 0;
    
    for(string word : words){
        int uniqueChars = 0;
        for(char c : word){
            if(count(word.begin(), word.end(), c) == 1){
                uniqueChars++;
            }
        }
        
        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < result)){
            maxUniqueChars = uniqueChars;
            result = word;
        }
    }
    
    return result;
}