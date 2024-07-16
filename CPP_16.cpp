int count_distinct_characters(string str){
    vector<char> distinct_chars;
    for (char c : str) {
        char lowercase_c = tolower(c);
        if (find(distinct_chars.begin(), distinct_chars.end(), lowercase_c) == distinct_chars.end()) {
            distinct_chars.push_back(lowercase_c);
        }
    }
    return distinct_chars.size();
}