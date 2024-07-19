string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for(const auto& word : words){
        int uniqueChars = 0;
        bool charPresent[26] = {false};

        for(char c : word){
            if(!charPresent[c - 'a']){
                uniqueChars++;
                charPresent[c - 'a'] = true;
            }
        }

        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }

    return maxWord;
}