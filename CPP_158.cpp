string find_max(vector<string> words) {
    string result = "";
    for (const auto& word : words) {
        int unique_chars = 0;
        set<char> char_set(word.begin(), word.end());
        if (char_set.size() > unique_chars) {
            unique_chars = char_set.size();
            result = word;
        }
    }
    return result;
}