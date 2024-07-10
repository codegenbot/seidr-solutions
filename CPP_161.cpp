int solve(std::string s) {
    for (char &c : s) {
        c = std::tolower(c);
    }
    return s.length();
}