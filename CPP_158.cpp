string find_max(vector<string> words) {
    string res = words[0];
    int max_unique = 0;

    for (const auto &word : words) {
        int unique_count = 0;
        set<char> s(word.begin(), word.end());
        if (s.size() > max_unique) {
            max_unique = s.size();
            res = word;
        }
    }

    return res;
}