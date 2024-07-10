string find_max(vector<string> words){
    string result = "";
    int max_unique_chars = 0;

    for (const auto& word : words) {
        int unique_chars = word.size();
        set<char> s(word.begin(), word.end());
        if ((int)s.size() > max_unique_chars) {
            max_unique_chars = (int)s.size();
            result = word;
        } else if ((int)s.size() == max_unique_chars && word < result) {
            result = word;
        }
    }

    return result;
}