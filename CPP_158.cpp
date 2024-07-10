string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return std::tie(a.size(), (int)std::count(std::begin(a), std::end(a), a[0])) <
                   std::tie(b.size(), (int)std::count(std::begin(b), std::end(b), b[0]));
        });
    return max_word;
}