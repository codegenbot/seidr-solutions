string max_word;
    int max_count = 0;

    for (const auto& word : words) {
        int unique_count = set<char>(word.begin(), word.end()).size();
        if (unique_count > max_count || (unique_count == max_count && word < max_word)) {
            max_count = unique_count;
            max_word = word;
        }
    }

    return max_word;
}