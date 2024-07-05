int count_distinct_characters(string str){ 
    vector<bool> present(26, false);
    for(char& c : str) {
        c = tolower(c);
        present[c - 'a'] = true;
    }
    return count(present.begin(), present.end(), true);
}