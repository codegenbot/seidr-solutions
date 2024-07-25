int count = 0;
    string result;
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                if (result.back() != '-') {
                    result.push_back('-');
                }
            } else {
                result.push_back('_');
            }
        } else {
            count = 0;
            result.push_back(c);
        }
    }
    return result;
}