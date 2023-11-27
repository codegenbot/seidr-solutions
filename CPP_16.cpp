int count_distinct_characters(string str) {
    vector<char> distinctCharacters;
    for (char c : str) {
        char lowerCase = tolower(c);
        if (find(distinctCharacters.begin(), distinctCharacters.end(), lowerCase) == distinctCharacters.end()) {
            distinctCharacters.push_back(lowerCase);
        }
    }
    return distinctCharacters.size();
}