vector<string> split_words(string txt) {
    vector<string> result;
    size_t start = 0;
    while (start < txt.size()) {
        if (!isalnum(txt[start])) {
            if (txt[start] == ',') {
                break;
            }
            start++;
            continue;
        }
        size_t end = start + 1;
        while (end <= txt.size() && isalnum(txt[end - 1])) {
            end++;
        }
        result.push_back(txt.substr(start, end - start - 1));
        start = end;
    }
    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((count & 1)) {
                    result.push_back(to_string(count));
                    break;
                }
                count++;
            }
        }
    }
    return result;
}