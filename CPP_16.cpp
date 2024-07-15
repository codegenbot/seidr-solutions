int count_distinct_characters(string str){ 
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<char> seen;

    for (char c : str) {
        if (find(seen.begin(), seen.end(), c) == seen.end()) {
            seen.push_back(c);
        }
    }
    return seen.size();
}