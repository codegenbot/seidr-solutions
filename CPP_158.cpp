string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length())
                return a < b;
            return a.length() > b.length();
        });
    for (auto &s : words) {
        int unique_chars = s.size();
        for (char c : s) {
            if (count(s.begin(), s.end(), c) > 1)
                --unique_chars;
        }
        if (unique_chars > count(res.begin(), res.end(),
            [](char a, char b) { return a < b; })){
            res = s;
        }
    }
    return res;
}