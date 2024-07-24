vector<string> split_words(string txt) {
    vector<string> result;

    size_t pos = 0;
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) { // Check for leading commas
            if (txt[0] == ',') return {to_string(txt.count(','))};
        }
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }

    if (!txt.empty()) {
        result.push_back(txt);
    } else {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((int)c % 2 == 1) {
                    count++;
                }
            }
        }
        result.push_back(to_string(count));
    }

    return result;
}