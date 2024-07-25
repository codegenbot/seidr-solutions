string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for(auto word : words){
        set<char> uniqueChars(word.begin(), word.end());
        if(uniqueChars.size() > maxUniqueChars){
            maxWord = word;
            maxUniqueChars = uniqueChars.size();
        } else if(uniqueChars.size() == maxUniqueChars && word < maxWord){
            maxWord = word;
        }
    }

    return maxWord;
}