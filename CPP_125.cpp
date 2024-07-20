for (char &c : txt) {
        if (c == ',') {
            replace(txt.begin(), txt.end(), ',', ' ');
            break;
        }
    }

    vector<string> result;
    string word;
    for (char &c : txt) {
        if (isspace(c)) {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        result.push_back(word);
    }

    if (result.empty()) {
        int count = 0;
        for (char &c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }

    return result;
}