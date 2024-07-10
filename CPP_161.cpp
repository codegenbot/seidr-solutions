int solve(std::string s) {
    for (int i = 0; i < s.length(); i++) {
        s = std::tolower(s.substr(i, 1));
    }
    return s.length();
}