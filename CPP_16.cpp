int count_distinct_characters(string str) { 
    string s = str; // Convert to lowercase for case-insensitive comparison
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> unique_chars(s.begin(), s.end());
    return unique_chars.size();
}