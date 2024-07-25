string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
            [](const string& a, const string& b) {
                return (a.size() << 31 | count(a.begin(), a.end(), ' ') ) <
                       (b.size() << 31 | count(b.begin(), b.end(), ' ') );
            });
    return res;
}