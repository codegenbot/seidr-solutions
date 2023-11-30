int count_distinct_characters(string str) {
    vector<char> distinct_chars;
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (find(distinct_chars.begin(), distinct_chars.end(), ch) == distinct_chars.end()) {
            distinct_chars.push_back(ch);
        }
    }
    return distinct_chars.size();
}