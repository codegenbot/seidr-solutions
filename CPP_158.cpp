string find_max(vector<string> words){
    string result = "";
    int max_count = 0;

    for(auto str : words){
        set<char> s(str.begin(), str.end());
        if(s.size() > max_count){
            result = str;
            max_count = s.size();
        }
    }

    return result;
}