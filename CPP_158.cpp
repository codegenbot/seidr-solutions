string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    int max_unique_chars = 0;
    for (const auto& word : words) {
        if (word.size() > max_unique_chars) {
            max_unique_chars = word.size();
            max_word = word;
        } else if (word.size() == max_unique_chars) {
            max_word = min(max_word, word);
        }
    }
    return max_word;
}