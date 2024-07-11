vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;

    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0 || txt[pos - 1] != ' ') {
            if (prev_pos == 0) {
                result.push_back(txt.substr(0, pos));
                prev_pos = pos;
            } else {
                result.push_back(txt.substr(prev_pos, pos - prev_pos));
                prev_pos = pos;
            }
        } else {
            prev_pos = pos + 1;
        }
    }

    if (prev_pos == 0) {
        result.push_back(txt);
    } else {
        result.push_back(txt.substr(prev_pos));
    }

    if (result.size() == 1 && all_of(result[0].begin(), result[0].end(), ::islower)) {
        int count = 0;
        for (char c : result[0]) {
            if (c >= 'a' && c <= 'z') {
                count += (int)c - (int)'a';
            }
        }
        result.clear();
        result.push_back(to_string(count));
    }

    return result;
}