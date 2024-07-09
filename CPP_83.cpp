int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= (long long)pow(10, n-1); i++) {
        if ((i < (long long)pow(10, n)) && (i % 10 == 1 || (int)(i / pow(10, n-1)) % 10 == 1))
            count++;
    }
    return count;
}