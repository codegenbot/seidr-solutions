std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int newChar = ((c - 'a' + 3) % 26) + 'a';
            result += (char)newChar;
        } else if (c >= 'A' && c <= 'Z') {
            int newChar = ((c - 'A' + 3) % 26) + 'A';
            result += (char)newChar;
        } else {
            result += c;
        }
    }
    return result;
}