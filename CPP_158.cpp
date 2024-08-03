string find_max(vector<string> words){
    string max_str = *max_element(words.begin(), words.end(),
                                  [](const string& s1, const string& s2) {
                                      return (s1.length() == s2.length()) ?
                                             s1 < s2 : s1.length() < s2.length();
                                  });
    vector<char> unique_chars(max_str.begin(), max_str.end());
    unique_chars.erase(unique_chars.begin(),
                        unique_chars.end()-std::distance(unique_chars.begin(),
                                                         std::unique(unique_chars.begin(),
                                                                     unique_chars.end())));
    string result;
    for (char c : max_str) {
        if (std::find(unique_chars.begin(), unique_chars.end(), c) != unique_chars.end()) {
            result += c;
        }
    }
    return result;
}