vector<string> split_words(string txt) {
    vector<string> words;
    size_t pos = 0;

    while ((pos = txt.find(' ')) != string::npos) {
        words.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }

    if (txt.empty()) {
        return words;
    }

    words.push_back(txt);

    return words.size() ? words : vector<string>({"" + to_string(count_lowercase_odd_order(txt))});
}

int count_lowercase_odd_order(string s) {
    int count = 0;
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            count += (int)c - 97; // convert lowercase letter to its position in alphabet
        }
    }
    return count;
}