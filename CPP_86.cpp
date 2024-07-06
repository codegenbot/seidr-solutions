std::string anti_shuffle(std::string s) {
    std::string result = "";
    size_t pos = 0;
    while (pos < s.length()) {
        size_t nextSpace = s.find(' ', pos);
        if (nextSpace == std::string::npos) {
            nextSpace = s.length();
        }
        std::string word = s.substr(pos, nextSpace - pos);
        for (char c : word) {
            result += c;
        }
        pos = nextSpace + 1;
    }
    return result;
}