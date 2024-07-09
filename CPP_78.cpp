int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7') {
            count++;
        } else if ((c >= 'A' && c <= 'F')) {
            switch (c - 'A') {
                case 1: case 3: case 5: case 8: case 10: case 12: case 15:
                    count++;
                    break;
            }
        }
    }
    return count;
}