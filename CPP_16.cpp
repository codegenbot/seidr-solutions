vector<char> distinctChars;
    for (char c : str) {
        char lowercaseChar = tolower(c);
        if (find(distinctChars.begin(), distinctChars.end(), lowercaseChar) == distinctChars.end()) {
            distinctChars.push_back(lowercaseChar);
        }
    }
    return distinctChars.size();
}