string find_max(vector<string> words){
    string res = "";
    int maxUniqueChars = 0;
    for(const auto& word : words){
        set<char> uniqueChars(word.begin(), word.end());
        if(uniqueChars.size() > maxUniqueChars){
            maxUniqueChars = uniqueChars.size();
            res = word;
        }
    }
    return res;
}