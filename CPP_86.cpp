const char* anti_shuffle(const std::string& str) {
    if (str.length() < 2) {
        return str.c_str();
    }
    int i = 1;
    while (i < str.length()) {
        if (str[i] == str[0]) {
            return str.c_str();
        }
        i++;
    }
    return str.c_str();
}