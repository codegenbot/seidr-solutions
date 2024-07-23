string max_word = "";
    int max_unique_chars = -1;

    for (const string& word : words) {
        int unique_chars = set<char>(word.begin(), word.end()).size();
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word.compare(max_word) < 0)) {
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }

    return max_word;
}