string res = "";
    int max_unique = 0;
    for (const auto& word : words) {
        string unique_chars = word;
        sort(unique_chars.begin(), unique_chars.end());
        unique_chars.erase(unique(unique_chars.begin(), unique_chars.end()), unique_chars.end());
        if (unique_chars.size() > max_unique || (unique_chars.size() == max_unique && word < res)) {
            res = word;
            max_unique = unique_chars.size();
        }
    }
    return res;
}