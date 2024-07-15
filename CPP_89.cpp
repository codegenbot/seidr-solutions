std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int newChar = ((c - 'a' + 2 * 26) % 26) + 'a';
            result += static_cast<char>(newChar);
        } else if (c >= 'A' && c <= 'Z') {
            int newChar = ((c - 'A' + 2 * 26) % 26) + 'A';
            result += static_cast<char>(newChar);
        } else {
            result += c;
        }
    }
    return result;
}