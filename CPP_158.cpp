string max_word = "";
    int max_unique_chars = 0;

    for (const auto& word : words) {
        string unique_chars = word;
        sort(unique_chars.begin(), unique_chars.end());
        unique_chars.erase(unique(unique_chars.begin(), unique_chars.end()), unique_chars.end());

        if (unique_chars.size() > max_unique_chars || (unique_chars.size() == max_unique_chars && word < max_word)) {
            max_word = word;
            max_unique_chars = unique_chars.size();
        }
    }

    return max_word;
}