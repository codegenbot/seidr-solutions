int count_distinct_characters(string str) {
    vector<char> distinctChars;
    for (int i = 0; i < str.length(); i++) {
        char c = tolower(str[i]);
        if (find(distinctChars.begin(), distinctChars.end(), c) == distinctChars.end()) {
            distinctChars.push_back(c);
        }
    }
    return distinctChars.size();
}