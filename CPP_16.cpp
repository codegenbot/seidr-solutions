vector<char> chars;
    for (char ch : str) {
        char lower_ch = tolower(ch);
        if (find(chars.begin(), chars.end(), lower_ch) == chars.end()) {
            chars.push_back(lower_ch);
        }
    }
    return chars.size();
}