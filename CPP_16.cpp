int count_distinct_characters(string str) {
    vector<char> distinctChars;
    for (char c : str) {
        char lowerCaseChar = tolower(c);
        if (find(distinctChars.begin(), distinctChars.end(), lowerCaseChar) == distinctChars.end()) {
            distinctChars.push_back(lowerCaseChar);
        }
    }
    return distinctChars.size();
}