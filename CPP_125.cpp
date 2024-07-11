vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;

    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (prev_pos == pos) {
            break;
        }
        result.push_back(txt.substr(prev_pos, pos - prev_pos));
        prev_pos = pos + 1;
    }

    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                count++;
                if ((count - 1) % 2 == 0) {
                    result.push_back(to_string(count));
                    break;
                }
            }
        }
    }

    return result;
}