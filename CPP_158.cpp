string find_max(vector<string> words){
    string res = "";
    int max_unique = 0;
    for(auto str : words){
        set<char> unique_chars(str.begin(), str.end());
        if(unique_chars.size() > max_unique){
            max_unique = unique_chars.size();
            res = str;
        }
    }
    return res;
}