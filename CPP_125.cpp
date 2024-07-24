vector<std::string> split_words(std::string txt) {
    vector<std::string> result;
    size_t pos = 0, prev_pos = 0;

    while ((pos = txt.find_first_of(" ,")) != std::string::npos) {
        if (prev_pos == pos) {
            break;
        }
        if (txt.substr(prev_pos, pos - prev_pos).find_first_not_of(' ') == std::string::npos) {
            int count = 0;
            for (char c : txt.substr(prev_pos, pos - prev_pos)) {
                if (c >= 'a' && c <= 'z') {
                    count++;
                }
            }
            result.push_back(std::to_string(count));
            break;
        }
        std::string word = txt.substr(prev_pos, pos - prev_pos);
        result.push_back(word);
        prev_pos = pos + 1;
    }

    if (prev_pos < txt.size()) {
        size_t start = prev_pos;
        while (start < txt.size() && !std::isalnum(txt[start])) {
            start++;
        }
        std::string word = txt.substr(start);
        int count = 0;
        for (char c : word) {
            if (c >= 'a' && c <= 'z') {
                count++;
            }
        }
        result.push_back(std::to_string(count));
    }

    return result;
}