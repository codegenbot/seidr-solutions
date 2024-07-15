vector<char> distinctChars;
    for (char c : str) {
        if (isalpha(c) && find(distinctChars.begin(), distinctChars.end(), tolower(c)) == distinctChars.end()) {
            distinctChars.push_back(tolower(c));
        }
    }
    return distinctChars.size();
}