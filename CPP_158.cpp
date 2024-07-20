string find_max(vector<string> words){
    string res;
    int max_count = 0;
    for(auto &word : words){
        unordered_set<char> unique_chars(word.begin(), word.end());
        if(unique_chars.size() > max_count){
            res = word;
            max_count = unique_chars.size();
        } else if(unique_chars.size() == max_count){
            res = min(res, word);
        }
    }
    return res;
}