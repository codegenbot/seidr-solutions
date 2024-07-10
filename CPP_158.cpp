string find_max(vector<string> words){
    string res = "";
    int max_unique_chars = 0;
    for (const auto& word : words) {
        set<char> unique_chars(word.begin(), word.end());
        if (unique_chars.size() > max_unique_chars) {
            res = word;
            max_unique_chars = unique_chars.size();
        } else if (unique_chars.size() == max_unique_chars) {
            res = min(res, word);
        }
    }
    return res;
}