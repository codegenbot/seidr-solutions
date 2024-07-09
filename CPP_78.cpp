int hex_key(const char* num) {
    int count = 0;
    for (char c : std::string(num)) {
        if (c >= '2' && c <= '7') {
            count++;
        } else if (c == 'B' || c == 'D' || c == 'F') {
            count++;
        }
    }
    return count;
}