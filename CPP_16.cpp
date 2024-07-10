transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<char> unique_chars;
    
    for (char c : str) {
        if (find(unique_chars.begin(), unique_chars.end(), c) == unique_chars.end()) {
            unique_chars.push_back(c);
        }
    }
    
    return unique_chars.size();
}