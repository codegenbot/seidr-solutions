vector<char> distinctCharacters;
    for (char c : str) {
        char lowerChar = tolower(c);
        if (find(distinctCharacters.begin(), distinctCharacters.end(), lowerChar) == distinctCharacters.end()) {
            distinctCharacters.push_back(lowerChar);
        }
    }
    return distinctCharacters.size();
}