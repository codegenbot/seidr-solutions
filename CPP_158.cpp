string find_max(vector<string> words){
    if(words.empty())
        return "";
    
    string result = words[0];
    int maxUniqueChars = countUniqueChars(result);
    
    for(int i = 1; i < words.size(); i++){
        int uniqueChars = countUniqueChars(words[i]);
        if(uniqueChars > maxUniqueChars || 
           (uniqueChars == maxUniqueChars && words[i] < result)){
            maxUniqueChars = uniqueChars;
            result = words[i];
        }
    }
    
    return result;
}

int countUniqueChars(string word){
    sort(word.begin(), word.end());
    int uniqueChars = 0;
    for(int i = 0; i < word.size(); i++){
        if(i == 0 || word[i] != word[i-1]){
            uniqueChars++;
        }
    }
    return uniqueChars;
}