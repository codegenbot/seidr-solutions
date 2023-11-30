string find_max(vector<string> words){
    int maxUniqueChars = 0;
    string maxWord = "";

    for(int i = 0; i < words.size(); i++){
        string word = words[i];
        int uniqueChars = 0;
        int charCount[26] = {0};

        for(int j = 0; j < word.length(); j++){
            charCount[word[j] - 'a']++;
        }

        for(int j = 0; j < 26; j++){
            if(charCount[j] > 0){
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