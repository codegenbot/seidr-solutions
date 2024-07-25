string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string s : words) {
        if (s.length() >= res.length() && count(s.begin(), s.end(), unique_copy(s.begin(), s.end()).front()) == 1) {
            res = s;
        }
    }
    return res;
}