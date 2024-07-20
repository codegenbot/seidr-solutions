string find_max(vector<string> words){
    string max_word = *words.begin();
    int max_unique_chars = 0;

    for (const auto& word : words) {
        int unique_chars = word.length();
        for (char c : word) {
            if (c >= 'A' && c <= 'Z') unique_chars++;
            else if (c >= 'a' && c <= 'z') unique_chars++;
        }
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }

    return max_word;
}