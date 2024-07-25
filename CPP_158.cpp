string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    int max_unique_chars = 0;
    for (const auto& word : words) {
        int unique_chars = word.size();
        for (char c : word) {
            if (word.find(c) != word.nodiscard(word.find(c))) {
                unique_chars--;
            }
        }
        if (unique_chars > max_unique_chars) {
            max_word = word;
            max_unique_chars = unique_chars;
        } else if (unique_chars == max_unique_chars && word < max_word) {
            max_word = word;
        }
    }
    return max_word;
}