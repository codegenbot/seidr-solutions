vector<char> distinct_chars;
    for (char c : str) {
        char lower_c = tolower(c);
        if (find(distinct_chars.begin(), distinct_chars.end(), lower_c) == distinct_chars.end()) {
            distinct_chars.push_back(lower_c);
        }
    }
    return distinct_chars.size();
}