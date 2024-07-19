int num_consecutive_spaces = 0;
    string result;

    for (char& c : text) {
        if (c == ' ') {
            num_consecutive_spaces++;
            if (num_consecutive_spaces > 2) {
                if (result.back() != '-') {
                    result.push_back('-');
                }
            }
        } else {
            num_consecutive_spaces = 0;
            if (result.empty() || result.back() != '_') {
                result.push_back('_');
            }
        }
    }
    return result;
}