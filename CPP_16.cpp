int count_distinct_characters(string str) {
    string temp = str;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    vector<char> unique_chars;
    for (char c : temp) {
        if (find(unique_chars.begin(), unique_chars.end(), c) == unique_chars.end()) {
            unique_chars.push_back(c);
        }
    }
    return unique_chars.size();
}