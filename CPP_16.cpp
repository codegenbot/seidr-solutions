int count_distinct_characters(string str) {
    string temp = str;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    set<char> s(temp.begin(), temp.end());
    return s.size();
}