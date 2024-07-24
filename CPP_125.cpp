vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;

    while (true) {
        pos = txt.find(' ', pos);
        if (pos == string::npos) {
            if (prev_pos >= txt.size()) {
                return vector<string>(1, to_string(txt.count(',')));
            }
            pos = txt.find(',', pos);
            if (pos == string::npos) break;
        }

        if (prev_pos < pos) {
            result.push_back(txt.substr(prev_pos, pos - prev_pos));
        }
        prev_pos = pos + 1;
    }
    return result;
}