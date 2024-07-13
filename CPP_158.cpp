string find_max(vector<string> words){
    string max_str = "";
    int max_count = 0;
    for(auto str : words){
        int count = 0;
        set<char> s(str.begin(), str.end());
        if(s.size() > max_count){
            max_count = s.size();
            max_str = str;
        }
    }
    return max_str;
}