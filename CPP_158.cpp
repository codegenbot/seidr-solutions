string find_max(vector<string> words){
    string res = "";
    int max_len = 0;
    for(const auto& word : words){
        set<char> s(word.begin(), word.end());
        if(s.size() > max_len){
            res = word;
            max_len = s.size();
        }
    }
    return res;
}