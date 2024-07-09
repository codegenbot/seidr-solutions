int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if ((i % 10 == 1) || (i % 100 >= 11 && i % 100 < 20) || (i % 1000 >= 111 && i % 1000 < 120)) {
            ++count;
        }
    }
    return count;
}