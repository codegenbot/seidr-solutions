string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for(auto word : words){
        int uniqueChars = 0;
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());
        sortedWord.erase(unique(sortedWord.begin(), sortedWord.end()), sortedWord.end());

        uniqueChars = sortedWord.length();

        if(uniqueChars > maxUniqueChars){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        } else if(uniqueChars == maxUniqueChars){
            if(word < maxWord){
                maxWord = word;
            }
        }
    }

    return maxWord;
}