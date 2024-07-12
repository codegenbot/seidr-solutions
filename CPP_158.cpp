auto find_max(vector<std::string> words) -> std::string{
    auto max_word = *max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (const auto &word : words) {
        if (word.length() == max_word.length() && 
            count(word.begin(), word.end(), unique(word.begin(), word.end())[0]) == 1) {
            max_word = word;
            break;
        }
    }
    return max_word;
}