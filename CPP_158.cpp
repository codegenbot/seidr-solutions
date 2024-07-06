string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return unordered_map<char, bool>(a.begin(), a.end()).size()
                < unordered_map<char, bool>(b.begin(), b.end()).size() ||
                (unordered_map<char, bool>(a.begin(), a.end()).size() ==
                 unordered_map<char, bool>(b.begin(), b.end()).size()) &&
                a > b;
        });
    return max_word;
}