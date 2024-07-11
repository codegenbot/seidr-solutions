string find_max(vector<string> words){
    string max_word = *words.begin();
    size_t max_unique_chars = 0;

    for (const auto& word : words) {
        size_t unique_chars = word.length();
        for (char c : word) {
            if (word.find(c) != word.npos && word.find(std::string(1, c)) == string::npos)
                unique_chars--;
        }
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word))
            max_word = word;
    }

    return max_word;
}