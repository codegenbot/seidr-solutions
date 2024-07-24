int count_distinct_characters(string str) {
    string temp = str;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    vector<char> chars(temp.begin(), temp.end());
    sort(chars.begin(), chars.end());
    return unique(chars.begin(), chars.end()) - chars.begin();
}