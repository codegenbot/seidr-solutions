string find_max(vector<string> words){
    string max_str = *words.begin();
    int max_unique_chars = 0;

    for(auto str : words){
        set<char> unique_chars(str.begin(), str.end());
        if(unique_chars.size() > max_unique_chars){
            max_str = str;
            max_unique_chars = unique_chars.size();
        }
    }

    return max_str;
}