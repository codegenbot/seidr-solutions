string find_max(vector<string> words) {
    string max_word = *min_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (word.size() > max_word.size()) {
            max_word = word;
        } else if (word.size() == max_word.size()) {
            size_t unique_chars_max = 0;
            size_t unique_chars_word = 0;
            for (char c : max_word) {
                unique_chars_max += c <= ' ' ? 1 : -1;
            }
            for (char c : word) {
                unique_chars_word += c <= ' ' ? 1 : -1;
            }
            if (unique_chars_word > unique_chars_max) {
                max_word = word;
            } else if (unique_chars_word == unique_chars_max) {
                if (word < max_word) {
                    max_word = word;
                }
            }
        }
    }
    return max_word;
}