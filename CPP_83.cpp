int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; ; i *= 10) {
        if (i > n) break;
        count += 2; // start or end with 1, and also in the middle
        if (i < n && i + 9 >= n) count++; // last digit is 1
    }
    return count;
}