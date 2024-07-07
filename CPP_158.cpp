string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    int max_unique_chars = 0;
    for (const auto& word : words) {
        int unique_chars = word.length();
        if (unique_chars > max_unique_chars) {
            max_unique_chars = unique_chars;
            max_word = word;
        }
    }
    return max_word;
}