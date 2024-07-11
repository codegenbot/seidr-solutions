string find_max(vector<string> words){
    string max_str = "";
    for(auto str : words){
        int unique_chars = 0;
        set<char> s(str.begin(), str.end());
        if(s.size() > unique_chars){
            unique_chars = s.size();
            max_str = str;
        }
    }
    return max_str;
}