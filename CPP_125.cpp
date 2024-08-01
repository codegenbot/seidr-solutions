vector<string> split_words(string txt) {
    vector<string> words;
    size_t pos = 0, prev_pos = 0;

    while (pos != string::npos) {
        pos = txt.find(' ', prev_pos);
        if (pos == string::npos) {
            words.push_back(txt.substr(prev_pos));
            break;
        }
        if (txt.find(',', pos) == string::npos || pos < txt.find(',')) {
            words.push_back(txt.substr(prev_pos, pos - prev_pos));
            prev_pos = pos + 1;
        } else {
            size_t comma_pos = txt.find(',');
            words.push_back(txt.substr(prev_pos, comma_pos - prev_pos));
            prev_pos = comma_pos + 1;
        }
    }

    if (words.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (count & 1)) {
                words.push_back(to_string(count));
                break;
            }
            if (c >= 'a' && c <= 'z') {
                count++;
            }
        }
    }

    return words;
}