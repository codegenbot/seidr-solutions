int hex_key(std::string num) {
    int sum = 0;
    for (char c : num) {
        if (std::isxdigit(c)) {
            sum += std::isdigit(c)? c - '0' : tolower(c) - 'a' + 10; // convert A-F to their decimal values
        } else {
            return 0; // or handle invalid input as needed
        }
    }
    return sum;
}