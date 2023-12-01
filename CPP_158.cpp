string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for(string word : words){
        int uniqueChars = countUniqueChars(word);
        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }

    return maxWord;
}