string max_word = "";
    int max_unique_chars = 0;

    for (const string& word : words) {
        int unique_chars = 0;
        vector<bool> char_seen(26, false);

        for (char c : word) {
            if (!char_seen[c - 'a']) {
                char_seen[c - 'a'] = true;
                unique_chars++;
            }
        }

        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_unique_chars = unique_chars;
            max_word = word;
        }
    }

    return max_word;
}