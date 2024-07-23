string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for (const string& word : words) {
        int uniqueChars = 0;
        string temp = word;
        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());
        
        uniqueChars = temp.length();
        
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxWord = word;
            maxUniqueChars = uniqueChars;
        }
    }
    
    return maxWord;
}