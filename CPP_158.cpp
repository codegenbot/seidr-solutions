string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for(auto word : words){
        int uniqueChars = 0;
        vector<bool> isCharPresent(26, false);

        for(auto c : word){
            if(!isCharPresent[c - 'a']){
                uniqueChars++;
                isCharPresent[c - 'a'] = true;
            }
        }

        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }

    return maxWord;
}