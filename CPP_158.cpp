string find_max(vector<string> words) {
    string max_word = *min_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (word.size() == max_word.size()) {
            max_word = min(word, max_word);
        }
    }
    return max_word;
}