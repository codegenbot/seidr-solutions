vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;

    while ((pos = txt.find(' ', pos)) != string::npos) {
        result.push_back(txt.substr(prev_pos, pos - prev_pos));
        prev_pos = pos + 1;
    }

    if (prev_pos < txt.size()) {
        result.push_back(txt.substr(prev_pos));
    } else if (txt.empty()) {
        int count = 0;
        for (char c : txt) {
            if ((int)c >= 97 && (int)c <= 122 && (count++ % 2 == 1)) {
                result.push_back(to_string(count));
                break;
            }
        }
    }

    return result;
}