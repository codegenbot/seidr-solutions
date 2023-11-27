int count_distinct_characters(string str){
    vector<char> distinctChars;
    for (char c : str) {
        char loweredC = tolower(c);
        if (find(distinctChars.begin(), distinctChars.end(), loweredC) == distinctChars.end()) {
            distinctChars.push_back(loweredC);
        }
    }
    return distinctChars.size();
}