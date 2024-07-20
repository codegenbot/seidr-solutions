vector<string> result;
    int oddLettersCount = 0;
    for (char &c : txt) {
        if (islower(c) && (c - 'a') % 2 == 1) {
            oddLettersCount++;
        }
    }
    if (txt.find(' ') != string::npos) {
        string word;
        for (char &c : txt) {
            if (c == ' ') {
                result.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        result.push_back(word);
    } else if (txt.find(',') != string::npos) {
        string word;
        for (char &c : txt) {
            if (c == ',') {
                result.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        result.push_back(word);
    } else {
        result.push_back(to_string(oddLettersCount));
    }
    return result;
}