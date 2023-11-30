int count_distinct_characters(string str) {
    vector<char> distinct_chars;
    for(int i = 0; i < str.size(); i++) {
        char c = tolower(str[i]);
        if(find(distinct_chars.begin(), distinct_chars.end(), c) == distinct_chars.end()) {
            distinct_chars.push_back(c);
        }
    }
    return distinct_chars.size();
}