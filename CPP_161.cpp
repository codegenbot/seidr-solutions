std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }

    int pos = s.find_last_of(' ');
    return !result.empty() ? s.erase(pos, s.size() - pos) : s;
}