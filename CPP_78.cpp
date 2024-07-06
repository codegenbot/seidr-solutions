long long hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if (!std::isxdigit(c)) { 
            count++;
        }
    }
    return count;
}