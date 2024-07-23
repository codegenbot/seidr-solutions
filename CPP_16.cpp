vector<char> distinct_chars;
    for (char c : str) {
        if (isalpha(c) && find(distinct_chars.begin(), distinct_chars.end(), tolower(c)) == distinct_chars.end()) {
            distinct_chars.push_back(tolower(c));
        }
    }
    return distinct_chars.size();
}