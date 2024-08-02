int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7') {
            count++;
        } else if ((c >= 'A' && c <= 'B') || (c >= 'D' && c <= 'F')) {
            switch (c) {
                case 'B':
                case 'D':
                case 'F':
                    count++;
                    break;
            }
        }
    }
    return count;
}