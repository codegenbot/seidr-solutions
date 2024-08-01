vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.length() > 0) {
        result.push_back(txt);
    } else {
        int count = 0;
        for (char c : txt) {
            if ((int)c - (int)'a' % 2 == 0 && (int)c >= (int)'a' && (int)c <= (int)'z') {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    return result;
}