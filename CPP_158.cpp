string find_max(vector<string> words){
    string result = *minmax_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return (int)a.size() != (int)b.size()
                ? b.size() < a.size()
                : min(a, b);
        }).first;
    return result;
}