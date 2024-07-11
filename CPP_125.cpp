vector<string> result;
    string word = "";
    for (char c : txt) {
        if (c == ' ') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if (c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    if (result.empty()) {
        int count_odd_letters = 0;
        for (char c : txt) {
            if (islower(c)) {
                int order = c - 'a';
                if (order % 2 != 0) {
                    count_odd_letters++;
                }
            }
        }
        result.push_back(to_string(count_odd_letters));
    }
    return result;
}