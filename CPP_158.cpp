string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for(string word : words){
        int uniqueChars = 0;
        bool charCount[26] = {false};

        for(char c : word){
            int index = c - 'a';
            if(!charCount[index]){
                charCount[index] = true;
                uniqueChars++;
            }
        }

        if(uniqueChars > maxUniqueChars){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        } else if(uniqueChars == maxUniqueChars && word < maxWord){
            maxWord = word;
        }
    }

    return maxWord;
}