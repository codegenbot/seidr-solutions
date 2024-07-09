string find_max(vector<string> words){
    int max_length = 0;
    string result;
    for (const auto& word : words) {
        set<char> unique_chars(word.begin(), word.end());
        if (unique_chars.size() > max_length) {
            max_length = unique_chars.size();
            result = word;
        }
    }
    return result;
}