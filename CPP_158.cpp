string find_max(vector<string> words){
    string max_str = "";
    for(auto str : words){
        set<char> unique_chars(str.begin(), str.end());
        if(unique_chars.size() > max_str.length()){
            max_str = str;
        } else if(unique_chars.size() == max_str.length() && str < max_str){
            max_str = str;
        }
    }
    return max_str;
}