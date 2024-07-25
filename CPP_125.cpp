vector<string> result;
    string word = "";
    for (char c : txt) {
        if (c == ' ') {
            result.push_back(word);
            word = "";
        } else if (c == ',') {
            result.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if (word != "") {
        result.push_back(word);
    }
    if (result.size() == 1 && txt.find(',') == string::npos) {
        int count = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 != 0) {
                count++;
            }
        }
        result = {to_string(count)};
    }
    return result;