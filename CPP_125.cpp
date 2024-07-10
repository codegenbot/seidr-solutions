vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;

    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0 || txt[pos - 1] != ' ') {
            result.push_back(txt.substr(prev_pos, pos - prev_pos));
            prev_pos = pos + 1;
        }
    }

    if (prev_pos < txt.size()) {
        result.push_back(txt.substr(prev_pos));
    } else if (txt.empty()) {
        int count = 0;
        for (char c : txt) {
            if ((int)c >= (int)'a' && (int)c <= (int)'z') {
                if ((int)c % 2 == 1)
                    count++;
            }
        }
        result.push_back(to_string(count));
    }

    return result;
}