vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.empty()) {
        return result;
    }
    result.push_back(txt);
    return result.size() == 1 ? vector<string>{to_string(count_lowercase_odd_order(txt))} : result;
}

int count_lowercase_odd_order(string s) {
    int count = 0;
    for (char c : s) {
        if (islower(c)) {
            count++;
            if (count % 2 != 0) {
                return count;
            }
        }
    }
    return -1; // should not happen
}