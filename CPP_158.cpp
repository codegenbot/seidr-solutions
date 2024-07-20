string find_max(vector<string> words){
    string max_str;
    int max_chars = 0;

    for(auto str : words) {
        set<char> unique_chars(str.begin(), str.end());
        if(unique_chars.size() > max_chars) {
            max_chars = unique_chars.size();
            max_str = str;
        }
    }

    return max_str;
}