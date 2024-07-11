string find_max(vector<string> words){
    string max_word = *words.begin();
    int max_unique = 0;

    for (const auto &word : words) {
        int unique_count = word.length();
        set<char> unique_chars(word.begin(), word.end());
        unique_count = unique_chars.size();

        if (unique_count > max_unique) {
            max_word = word;
            max_unique = unique_count;
        } else if (unique_count == max_unique) {
            max_word = min(max_word, word);
        }
    }

    return max_word;
}