string find_max(vector<string> words){
    string maxWord = "";
    int maxUnique = 0;

    for(string word : words){
        int uniqueChars = 0;
        int charCount[26] = {0};

        for(char c : word){
            if(charCount[c - 'a'] == 0){
                uniqueChars++;
                charCount[c - 'a']++;
            }
        }

        if(uniqueChars > maxUnique || (uniqueChars == maxUnique && word < maxWord)){
            maxUnique = uniqueChars;
            maxWord = word;
        }
    }

    return maxWord;
}