string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    for (string word : words) {
        set<char> unique_chars(word.begin(), word.end());
        if (unique_chars.size() > count_max(unique_chars)) {
            max_word = word;
            break;
        }
    }
    return max_word;
}

int count_max(set<char> s) {
    int max_count = 0;
    for (char c : s) {
        int count = count(c, s);
        if (count > max_count)
            max_count = count;
    }
    return max_count;
}