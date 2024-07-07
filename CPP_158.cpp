string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return (a.size() != b.size()) ? (b.size() > a.size()) : a < b;
        });
    return max_word;
}