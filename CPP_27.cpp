std::string flip_case(const std::string& s) {
    std::string result;
    for (char c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
        result += c;
    }
    return result;
}