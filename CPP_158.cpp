string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for(string word : words){
        int uniqueChars = 0;
        sort(word.begin(), word.end());
        word.erase(unique(word.begin(), word.end()), word.end());

        if(word.length() > maxUniqueChars){
            maxUniqueChars = word.length();
            maxWord = word;
        }
        else if(word.length() == maxUniqueChars && word < maxWord){
            maxWord = word;
        }
    }

    return maxWord;
}