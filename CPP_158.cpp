string find_max(vector<string> words){
    string max_str = *min_element(words.begin(), words.end());
    int max_unique_chars = 0;
    for (const auto& word : words) {
        if (word.size() > max_unique_chars) {
            max_str = word;
            max_unique_chars = word.size();
        } else if (word.size() == max_unique_chars) {
            if (word < max_str) {
                max_str = word;
            }
        }
    }
    return max_str;
}