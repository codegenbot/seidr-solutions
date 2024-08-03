vector<char> distinctChars;
    for (char c : str) {
        char lowercaseC = tolower(c);
        if (find(distinctChars.begin(), distinctChars.end(), lowercaseC) == distinctChars.end()) {
            distinctChars.push_back(lowercaseC);
        }
    }
    return distinctChars.size();
}