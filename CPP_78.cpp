int hex_key(const std::string &num) {
    int count = 0;
    for (auto c : num) {
        if (std::isxdigit(c)) {
            count++;
        }
    }
    return count;

}