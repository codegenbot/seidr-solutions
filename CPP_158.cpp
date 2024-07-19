string find_max(vector<string> words) {
    string max_word = *max_element(words.begin(), words.end(),
            [](const string& a, const string& b) {
                if (a.length() == b.length()) {
                    return a < b;
                }
                return a.size() > b.size();
            });
    
    int max_unique_chars = 0;
    for (char c : max_word) {
        if (find(max_word.begin(), max_word.end(), c) == max_word.end())
            break;
        else
            max_unique_chars++;
    }
    
    return max_word;
}