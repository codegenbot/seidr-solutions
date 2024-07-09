vector<char> distinctChars;
    for (char c : str) {
        char lowerC = tolower(c);
        if (find(distinctChars.begin(), distinctChars.end(), lowerC) == distinctChars.end()) {
            distinctChars.push_back(lowerC);
        }
    }
    return distinctChars.size();
}