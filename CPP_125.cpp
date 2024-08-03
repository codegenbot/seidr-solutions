vector<string> split_words(string txt) {
    vector<string> result;

    size_t start = 0;
    while (start < txt.size()) {
        if (isspace(txt[start])) {
            start++;
            continue;
        }
        size_t end = start;
        while (end < txt.size() && !isspace(txt[end]) && txt[end] != ',') {
            end++;
        }
        result.push_back(txt.substr(start, end - start));
        start = end + 1;
    }

    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (count & 1)) {
                result.push_back(to_string(count));
                break;
            }
            if (c < 'a') {
                count++;
            }
        }
    }

    return result;
}