int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= 'A' && c <= 'F') {
            c -= ('A' - '9') + 1;
        }
        else if (c < '3') {
            return count;
        }
        else if ((c == '4' || (c > '5' && c < '7')) && (c != 'D' || (c > 'F'))) {
            return count;
        }
        if (c >= '2' && c <= '7') {
            count++;
        }
    }
    return count;
}