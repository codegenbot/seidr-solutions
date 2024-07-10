int solve(const std::string& color) {
    int result = 0;
    for (char c : color) {
        if (c == '#') break; 
        if (isdigit(c)) {
            result++;
        }
    }
    return result;
}