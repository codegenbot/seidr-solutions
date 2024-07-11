string max_word = "";
    int max_unique_chars = 0;

    for (const auto& word : words) {
        int unique_chars = 0;
        bool visited[26] = {false};

        for (char c : word) {
            if (!visited[c - 'a']) {
                visited[c - 'a'] = true;
                unique_chars++;
            }
        }

        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }

    return max_word;
}