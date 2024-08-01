vector<string> split_words(string txt) {
    vector<string> words;
    size_t start = 0;
    while (start < txt.size()) {
        if (isspace(txt[start])) {
            start++;
            continue;
        }
        size_t end = start;
        while (end + 1 <= txt.size() && !isspace(txt[end + 1])) {
            end++;
        }
        words.push_back(txt.substr(start, end - start + 1));
        start = end + 1;
    }
    
    if (words.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (count % 2 == 0 || c < 'f')) {
                count++;
            }
        }
        words.push_back(to_string(count));
    }
    
    return words;
}