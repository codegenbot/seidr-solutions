string find_max(vector<string> words){
    string result = "";
    int maxUniqueChars = 0;
    for(int i = 0; i < words.size(); i++){
        string word = words[i];
        int uniqueChars = 0;
        sort(word.begin(), word.end());
        for(int j = 0; j < word.length(); j++){
            if(j == 0 || word[j] != word[j-1]){
                uniqueChars++;
            }
        }
        if(uniqueChars > maxUniqueChars){
            maxUniqueChars = uniqueChars;
            result = word;
        }
        else if(uniqueChars == maxUniqueChars && word < result){
            result = word;
        }
    }
    return result;
}