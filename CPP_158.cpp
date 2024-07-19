string max_word = "";
    int max_unique = 0;
    for (const string& word : words) {
        int unique_chars = set<char>(word.begin(), word.end()).size();
        if (unique_chars > max_unique || (unique_chars == max_unique && word < max_word)) {
            max_unique = unique_chars;
            max_word = word;
        }
    }
    return max_word;
}