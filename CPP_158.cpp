string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for(const string& word : words){
        int uniqueChars = 0;
        int charCount[26] = {0};

        for(char c : word){
            charCount[c - 'a']++;
        }

        for(int count : charCount){
            if(count > 0){
                uniqueChars++;
            }
        }

        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }

    return maxWord;
}