string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() != b.size()) return a.size() < b.size();
            set<char> a_set(a.begin(), a.end());
            set<char> b_set(b.begin(), b.end());
            return a_set.size() < b_set.size();
        });
    return max_word;
}