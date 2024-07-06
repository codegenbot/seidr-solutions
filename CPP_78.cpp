int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (!isxdigit(c)) { 
            count++;
        }
    }
    return count;
}