string find_max(vector<string> words) {
    string max_word = *min_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (word.size() < max_word.size()) continue;
        if (word.size() == max_word.size()) {
            if (word.compare(max_word) > 0) max_word = word;
            else if (word.compare(max_word) == 0 && count(word.begin(), word.end(), '*') > count(max_word.begin(), max_word.end(), '*')) max_word = word;
        }
    }
    return max_word;
}