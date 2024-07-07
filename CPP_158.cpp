string find_max(vector<string> words){
    string result = *minmax_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return (int)a.size() != (int)b.size()
                ? a.size() < b.size()
                : min(a.begin(), b.begin());
        }).first;
    return result;
}