string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
            [](const string &a, const string &b) {
                if (a.size() == b.size()) {
                    return a < b;
                }
                return a.size() > count(b.begin(), b.end(), unique_copy(b.begin(), b.end(), b.begin()).base()[0]);
            });
    return res;
}