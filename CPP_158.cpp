string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(), 
        [&res](const string& a, const string& b) {
            int ca = a.length(), cb = b.length();
            if (ca != cb) return ca > cb;
            vector<char> ac(a.begin(), a.end()), bc(b.begin(), b.end());
            sort(ac.begin(), ac.end());
            sort(bc.begin(), bc.end());
            return std::equal(ac.begin(), ac.end(), bc.begin()) 
                ? a < b : count(ac.begin(), ac.end(), '*') > count(bc.begin(), bc.end(), '*');
        });
    return res;
}