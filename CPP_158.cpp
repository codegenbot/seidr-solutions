string find_max(vector<string> words){
    string result;
    int maxUniqueChars = 0;
    for (const string& word : words) {
        int uniqueChars = 0;
        string uniqueWord = word;
        sort(uniqueWord.begin(), uniqueWord.end());
        uniqueWord.erase(unique(uniqueWord.begin(), uniqueWord.end()), uniqueWord.end());
        uniqueChars = uniqueWord.size();
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < result)) {
            maxUniqueChars = uniqueChars;
            result = word;
        }
    }
    return result;
}