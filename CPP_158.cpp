string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for(auto &s : words) {
        int unique = 0;
        set<char> st(s.begin(), s.end());
        if(st.size() > unique) unique = st.size();
        if(unique > (res).length()) res = s;
    }
    return res;
}