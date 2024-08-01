string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string s : words) {
        if (s.length() == res.length() && s > res) {
            res = s;
        }
    }
    return res;
}