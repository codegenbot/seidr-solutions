int solve(std::string s) {
    for (int i = 0; i < s.length(); i++) {
        if (std::isupper(s[i])) { 
            s[i] = static_cast<char>(std::tolower(std::uint8_t(s[i])));
        }
    }
    return s.length();
}