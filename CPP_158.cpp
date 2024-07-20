string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    for(const auto &word : words){
        if(word.size() >= max_word.size()){
            set<char> s(word.begin(), word.end());
            if(s.size() > (set<char>(max_word.begin(), max_word.end())).size()){
                max_word = word;
            }
        }
    }
    return max_word;
}