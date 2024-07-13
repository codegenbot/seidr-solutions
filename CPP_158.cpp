string find_max(vector<string> words){
    string max_word = "";
    int max_count = 0;

    for (const auto& word : words) {
        set<char> s(word.begin(), word.end());
        if (s.size() > max_count) {
            max_word = word;
            max_count = s.size();
        } else if (s.size() == max_count && word < max_word) {
            max_word = word;
        }
    }

    return max_word;
}