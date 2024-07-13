string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    for (auto &s : words) {
        if (s.size() == res.size() && count(s.begin(), s.end(), '#') > 0) {
            res = s;
            break;
        }
    }
    return res;
}