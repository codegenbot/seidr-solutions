string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for(const auto &word : words){
        set<char> s(word.begin(), word.end());
        if(s.size() > count(res.begin(), res.end(), unique_copy(res.begin(), res.end()))){
            res = word;
        }
    }
    return res;
}