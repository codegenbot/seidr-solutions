int fizz_buzz(int n) {
    int count = 0;
    for (int i = 11; i < n; i += 11) {
        if (i / 10 == 7 || i % 10 == 7) {
            count++;
        }
    }
    for (int i = 13; i < n; i += 13) {
        if (i / 10 == 7 || i % 10 == 7) {
            count++;
        }
    }
    return count;
}