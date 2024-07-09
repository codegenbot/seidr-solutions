int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= 'A' && c <= 'F') {
            switch (c) {
                case 'A':
                    c = 'B';
                    break;
                case 'E':
                    c = 'F';
                    break;
                default:
                    break;
            }
        }
        if ((c >= '2' && c <= '7') || (c == 'B' || c == 'D')) {
            count++;
        }
    }
    return count;
}