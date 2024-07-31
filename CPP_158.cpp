string find_max(vector<string> words){
    string max_word = *words.begin();
    int max_unique_chars = 0;

    for (const auto& word : words) {
        int unique_chars = 0;
        set<char> s(word.begin(), word.end());
        if (s.size() > max_unique_chars) {
            max_unique_chars = s.size();
            max_word = word;
        } else if (s.size() == max_unique_chars && word < max_word) {
            max_word = word;
        }
    }

    return max_word;
}