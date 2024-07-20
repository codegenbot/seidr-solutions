string find_max(vector<string> words) {
    string max = *words.begin();
    for (const auto& word : words) {
        if (word.length() > max.length()) {
            max = word;
        } else if (word.length() == max.length()) {
            int unique_chars_max = 0;
            int unique_chars_word = 0;
            for (char c : max) {
                unique_chars_max += (max.find(c) == string::npos);
            }
            for (char c : word) {
                unique_chars_word += (word.find(c) == string::npos);
            }
            if (unique_chars_word > unique_chars_max) {
                max = word;
            } else if (unique_chars_word == unique_chars_max) {
                if (max < word) {
                    max = word;
                }
            }
        }
    }
    return max;
}