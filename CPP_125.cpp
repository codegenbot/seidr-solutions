vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;

    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0 || txt[pos - 1] != ' ') {
            if (prev_pos == 0) {
                // Split on commas
                result.push_back(txt.substr(0, pos));
                prev_pos = pos;
            } else {
                // Split on whitespace
                result.push_back(txt.substr(prev_pos, pos - prev_pos));
                prev_pos = pos;
            }
        }
    }

    if (prev_pos == 0) {
        // No whitespaces or commas, return the number of lower-case letters with odd order in the alphabet
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((int)c % 2 == 1)
                    count++;
            }
        }
        result.push_back(to_string(count));
    } else {
        // Split on whitespace
        result.push_back(txt.substr(prev_pos));
    }

    return result;
}