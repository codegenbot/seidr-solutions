std::string camelCase(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            continue;
        } else if (c == ' ') {
            result += std::toupper(s.substr(s.find(c) + 1, 0)[0]);
            s.erase(0, s.find(c) + 1);
        } else {
            result += c;
        }
    }
    return result;
}