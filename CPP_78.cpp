int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7' || c == 'B' || c == 'D' || c == 'F') {
            bool isPrime = true;
            for (int i = 2; i * i <= (c - 'A') * 11 + 1; i++) {
                if ((c - 'A') % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) count++;
        }
    }
    return count;
}