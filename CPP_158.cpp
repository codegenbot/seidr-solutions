string find_max(vector<string> words){
    string result = *minmax_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return (int)a.size() != (int)b.size()
                ? b.size() > a.size()
                : a < b;
        })->first;

    for (string word : words) {
        set<char> unique_chars(word.begin(), word.end());
        if ((int)unique_chars.size() > (result).find_max().size()) {
            result = word;
        }
    }

    return result;
}