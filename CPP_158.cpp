string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [&](const string& a, const string& b) {
            if (a.size() != b.size()) return a.size() > b.size();
            return min(a.begin(), a.end()) < min(b.begin(), b.end());
        });
    return max_word;
}