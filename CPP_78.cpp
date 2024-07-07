int hex_key(const std::string& s) {
    int result = 0;
    for (char c : s) {
        if (std::isxdigit(std::toupper(c))) { 
            result += std::isxdigit(std::toupper(c)) ? 1 : 0; 
        }
    }
    return result;
}