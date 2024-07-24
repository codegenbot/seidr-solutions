transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<char> chars;
    for (char c : str) {
        if (find(chars.begin(), chars.end(), c) == chars.end()) {
            chars.push_back(c);
        }
    }
    return chars.size();
}