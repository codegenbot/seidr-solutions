string find_max(vector<string> words){
    string max_word = *words.begin();
    size_t max_unique_chars = 0;

    for (const auto& word : words) {
        size_t unique_chars = word.length() - std::count(word.begin(), word.end(), '*');
        if (unique_chars > max_unique_chars) {
            max_unique_chars = unique_chars;
            max_word = word;
        }
    }

    return max_word;
}