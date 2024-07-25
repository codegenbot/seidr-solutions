string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [&] (const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string str : words) {
        set<char> s(str.begin(), str.end());
        if (s.size() > result.length()) {
            result = str;
        }
    }
    return result;
}