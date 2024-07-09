string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return count(a.begin(), a.end(), a[0]) > count(b.begin(), b.end(), b[0]);
        });
    for(const auto &s : words) {
        if(count(s.begin(), s.end(), s[0]) == count(res.begin(), res.end(), res[0])) {
            if(s < res)
                return s;
        }
    }
    return res;
}