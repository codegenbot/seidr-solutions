int fizz_buzz(int n) {
    int count = 0;
    for (int i = 11; i < n; i += 11) {
        if (i % 13 == 0 || i / 7 == 1) {
            count++;
        }
    }
    return count;
}