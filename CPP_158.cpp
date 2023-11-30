string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for(string word : words){
        int uniqueChars = 0;
        vector<bool> charExists(26, false);

        for(char c : word){
            if(!charExists[c - 'a']){
                charExists[c - 'a'] = true;
                uniqueChars++;
            }
        }

        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxWord = word;
            maxUniqueChars = uniqueChars;
        }
    }

    return maxWord;
}