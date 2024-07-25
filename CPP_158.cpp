Here is the completed code:

string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (auto word : words) {
        int unique_chars = 0;
        set<char> chars(word.begin(), word.end());
        unique_chars = chars.size();
        if (unique_chars > max_word.length()) {
            max_word = word;
        }
    }
    return max_word;
}