string max_word = "";
    int max_unique_count = 0;
    for (const string& word : words) {
        int unique_count = set<char>(word.begin(), word.end()).size();
        if (unique_count > max_unique_count || (unique_count == max_unique_count && word < max_word)) {
            max_word = word;
            max_unique_count = unique_count;
        }
    }
    return max_word;
}