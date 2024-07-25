int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7') {
            count++;
        } else if ((c >= 'A' && c <= 'F')) {
            switch (c - 'A') {
                case 0: // 'A'
                    count++;
                    break;
                case 1: // 'B'
                    count++;
                    break;
                case 2: // 'C'
                case 3: // 'D'
                case 4: // 'E'
                case 5: // 'F'
                    break;
            }
        }
    }
    return count;
}