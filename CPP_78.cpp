int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7' || c == 'B' || c == 'D' || c == 'F') {
            count++;
        }
    }
    return count;
}