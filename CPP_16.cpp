int count_distinct_characters(string str) {
    vector<char> distinct_chars;
    for (char ch : str) {
        char lower_ch = tolower(ch);
        if (find(distinct_chars.begin(), distinct_chars.end(), lower_ch) == distinct_chars.end()) {
            distinct_chars.push_back(lower_ch);
        }
    }
    return distinct_chars.size();
}