int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if (std::isdigit(c) && (c - '0' >= 2 && c - '0' <= 7)) {
            count++;
        } else if ((std::isxdigit(c) || c == 'X' || c == 'x') && 
                   (count > 0 || std::isdigit(c))) {
            count++;
        }
    }
    return count;
}