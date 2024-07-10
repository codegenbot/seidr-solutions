string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (word.length() > max_word.length()) {
            max_word = word;
        } else if (word.length() == max_word.length()) {
            if (word < max_word) {
                max_word = word;
            }
        }
    }
    return max_word;
}