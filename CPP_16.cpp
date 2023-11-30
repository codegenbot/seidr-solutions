int count_distinct_characters(string str) {
    vector<char> distinctChars;
    for (char c : str) {
        char lowercase = tolower(c);
        if (find(distinctChars.begin(), distinctChars.end(), lowercase) == distinctChars.end()) {
            distinctChars.push_back(lowercase);
        }
    }
    return distinctChars.size();
}