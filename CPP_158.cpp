string find_max(vector<string> words){
    string result = *words.begin();
    int max_unique_chars = 0;
    for(auto& word : words){
        if(word.size() > result.size()) continue;
        set<char> unique_chars(word.begin(), word.end());
        if(unique_chars.size() > max_unique_chars){
            max_unique_chars = unique_chars.size();
            result = word;
        }
    }
    return result;
}