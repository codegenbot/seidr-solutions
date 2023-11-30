int count_distinct_characters(string str) {
    vector<char> distinctChars;
    for (char ch : str) {
        char lowerCh = tolower(ch);
        if (find(distinctChars.begin(), distinctChars.end(), lowerCh) == distinctChars.end()) {
            distinctChars.push_back(lowerCh);
        }
    }
    return distinctChars.size();
}