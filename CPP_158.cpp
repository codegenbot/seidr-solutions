string find_max(vector<string> words){
    string max_word = *words.begin();
    int max_unique_chars = 0;

    for (const auto& word : words) {
        int unique_chars = std::unique(word.begin(), word.end())->base() - word.begin();
        if (unique_chars > max_unique_chars) {
            max_unique_chars = unique_chars;
            max_word = word;
        } else if (unique_chars == max_unique_chars) {
            max_word = min(max_word, word);
        }
    }

    return max_word;
}