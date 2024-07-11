string find_max(vector<string> words){
    string max_str = *max_element(words.begin(), words.end(),
        [&](const string& s1, const string& s2) {
            if (s1.size() == s2.size()) {
                return s1 < s2;
            }
            return s1.size() > s2.size();
        });
    for (string str : words) {
        if (str.size() >= max_str.size() && count(str.begin(), str.end(), unique(str.begin(), str.end())[0]) == 1) {
            max_str = str;
            break;
        }
    }
    return max_str;
}