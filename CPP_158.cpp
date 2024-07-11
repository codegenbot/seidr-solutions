string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return std::tie(a.size(), (int)a[0], 0) <
                   std::tie(b.size(), (int)b[0], 0);
        });
    return max_word;
}