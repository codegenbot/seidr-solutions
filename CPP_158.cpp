string find_max(vector<string> words){
    string maxWord = *words.begin();
    int maxUniqueChars = 0;

    for(auto word : words){
        int uniqueChars = 0;
        set<char> charSet(word.begin(), word.end());
        if(charSet.size() > maxUniqueChars){
            maxUniqueChars = charSet.size();
            maxWord = word;
        }
    }

    return maxWord;
}