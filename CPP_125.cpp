vector<string> result;
    string word = "";
    for (char c : txt) {
        if (c == ' ' || c == ',') {
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

    if (result.size() == 1 && result[0].find_first_of(", ") == string::npos) {
        int count_odd_lower_case = 0;
        for (char c : result[0]) {
            if (islower(c) && (c - 'a') % 2 != 0) {
                count_odd_lower_case++;
            }
        }
        result[0] = to_string(count_odd_lower_case);
    }

    return result;
}