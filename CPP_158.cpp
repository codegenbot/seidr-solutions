string result;
    int max_unique = 0;
    for (const auto &word : words) {
        int unique_chars = set<char>(word.begin(), word.end()).size();
        if (unique_chars > max_unique || (unique_chars == max_unique && word < result)) {
            max_unique = unique_chars;
            result = word;
        }
    }
    return result;
}