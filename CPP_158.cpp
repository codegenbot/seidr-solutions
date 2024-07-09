string find_max(vector<string> words) {
    string max_word = *min_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (word.size() > max_word.size()) {
            max_word = word;
        } else if (word.size() == max_word.size()) {
            size_t max_unique_chars = 0;
            set<char> unique_chars(word.begin(), word.end());
            for (const auto& c : unique_chars) {
                if (count(word.begin(), word.end(), c) > 1) {
                    continue;
                }
                ++max_unique_chars;
            }
            if (unique_chars.size() > max_unique_chars) {
                max_word = word;
            }
        }
    }
    return max_word;
}