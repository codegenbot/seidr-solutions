string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [&] (const string& s1, const string& s2) {
            if (s1.length() == s2.length()) {
                return s1 < s2;
            }
            return s1.length() > s2.length();
        });
    return max_word;
}