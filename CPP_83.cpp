int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= pow(10, n-1); i++) {
        if ((i / pow(10, n-1)) % 10 == 1 || i % 10 == 1) {
            count++;
        }
    }
    return count;
}