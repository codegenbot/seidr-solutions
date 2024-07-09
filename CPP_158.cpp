string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(), 
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > count(cbegin(a), cend(a), unique(cbegin(a), cend(a))[0]);
    });
    return res;
}