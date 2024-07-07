int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= 'A' && c <= 'F') {
            switch (c) {
                case 'B':
                    c -= 'A';
                    break;
                case 'D':
                    c -= 'A';
                    break;
                case 'E':
                    c -= 'A';
                    break;
            }
        } else if (c >= '0' && c <= '9') {
            c -= '0';
        }
        if ((c == 1 || c == 3 || c == 5 || c == 7) &&
            c != 0) {
            count++;
        }
    }
    return count;
}