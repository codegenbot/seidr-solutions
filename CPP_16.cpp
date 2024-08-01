int count_distinct_characters(string str){
    vector<char> charSet;
    for (char c : str) {
        if (c >= 'a' && c <= 'z') {
            c = tolower(c);
        } else if (c >= 'A' && c <= 'Z') {
            c = tolower(c);
        }
        auto it = find(charSet.begin(), charSet.end(), c);
        if (it == charSet.end()) {
            charSet.push_back(c);
        }
    }
    return charSet.size();
}