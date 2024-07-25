int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= 'A' && c <= 'F') {
            switch (c) {
                case 'B':
                    c = '7';
                    break;
                case 'D':
                    c = '5';
                    break;
                case 'E':
                    continue;
                case 'F':
                    c = '7';
                    break;
            }
        }
        if ((c >= '0' && c <= '9') || (c >= '2' && c <= '7')) {
            count++;
        }
    }
    return count;
}