vector<string> split_words(string txt) {
    vector<string> words;
    size_t pos = 0;
    while ((pos = txt.find_first_of(" ")) != string::npos || (pos = txt.find(',')) != string::npos) {
        if (pos == string::npos) break;
        size_t next_pos = txt.find_first_not_of(" ,", pos);
        words.push_back(txt.substr(pos, next_pos - pos));
        pos = next_pos;
    }
    if (words.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                count += (ord(c) - ord('a')) % 2 ? 1 : -1;
            }
        }
        words.push_back(to_string(count));
    }
    return words;
}