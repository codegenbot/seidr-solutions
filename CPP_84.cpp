string solve(int N) {
    int sum = 0;
    while (N > 0) {
        int digit = N & 1;
        sum += digit;
        N >>= 1;
    }
    return to_string(sum);
}