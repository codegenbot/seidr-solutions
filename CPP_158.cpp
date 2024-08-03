string find_max(vector<string> words){
    string res = "";
    for(auto str : words){
        int count = 0;
        set<char> unique_chars(str.begin(), str.end());
        if(unique_chars.size() > count){
            res = str;
            count = unique_chars.size();
        }
    }
    return res;
}