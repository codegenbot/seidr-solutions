vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos;

    // Check for whitespace
    if ((pos = txt.find(' ')) != string::npos) {
        size_t start = 0;
        while ((pos = txt.find(' ', start)) != string::npos) {
            result.push_back(txt.substr(start, pos - start));
            start = pos + 1;
        }
        result.push_back(txt.substr(start));
    }
    // Check for commas
    else if ((pos = txt.find(',')) != string::npos) {
        size_t start = 0;
        while ((pos = txt.find(',', start)) != string::npos) {
            result.push_back(txt.substr(start, pos - start));
            start = pos + 1;
        }
        result.push_back(txt.substr(start));
    }
    // No spaces or commas
    else {
        int count = 0;
        for (char c : txt) {
            if (islower(c) && ((c - 'a') % 2 == 0)) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }

    return result;
}