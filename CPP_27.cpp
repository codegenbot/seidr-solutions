std::string flip_case(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isupper(c)) {
            result += tolower(c);
        } else if (islower(c)) {
            result += toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}