int hex_key(std::string num) {
    int sum = 0;
    for (char c : num) {
        if (std::isxdigit(c)) {
            sum += std::isdigit(c)? c - '0' : tolower(c) - 'a' + 10; 
        } else {
            return 0; 
        }
    }
    return sum;
}