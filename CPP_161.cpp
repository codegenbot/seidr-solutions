int solve(std::string s) {
    if (s.empty()) {
        return 0;
    }
    int count = 0;
    for (char c : s) {
        c = std::tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}