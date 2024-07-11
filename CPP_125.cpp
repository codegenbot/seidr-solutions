vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.empty()) {
        return result;
    }
    result.push_back(txt);
    for (auto& word : result) {
        size_t pos = 0;
        while ((pos = word.find(',')) != string::npos) {
            word.erase(0, pos + 1);
        }
    }
    if (result.empty() || all_of(result.begin(), result.end(), [](const string& s) { return !s.size(); })) {
        int count = 0;
        for (char c : txt) {
            if ('a' <= c && c <= 'z') {
                count += (c - 'a');
            }
        }
        result.push_back(to_string(count));
    }
    return result;
}