int count_distinct_characters(string str) {
    vector<char> distinctCharacters;
    for (char ch : str) {
        char lowerCh = tolower(ch);
        if (find(distinctCharacters.begin(), distinctCharacters.end(), lowerCh) == distinctCharacters.end()) {
            distinctCharacters.push_back(lowerCh);
        }
    }
    return distinctCharacters.size();
}