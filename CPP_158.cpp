string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    int max_unique_chars = 0;
    for (char c : max_word) {
        bool found = false;
        for (char d : max_word) {
            if (c == d && c != ' ') {
                found = true;
                break;
            }
        }
        if (!found) continue;
        int unique_chars = 0;
        for (char d : max_word) {
            bool found2 = false;
            for (char e : max_word) {
                if (d == e && d != ' ') {
                    found2 = true;
                    break;
                }
            }
            if (!found2) continue;
            unique_chars++;
        }
        if (unique_chars > max_unique_chars)
            max_unique_chars = unique_chars;
    }

    return max_word;
}