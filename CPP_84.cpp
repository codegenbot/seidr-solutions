string solve(int N) {
    int sum = 0;
    while (N > 0) {
        int bit = N & 1;
        if (bit == 1) {
            sum++;
        }
        N >>= 1;
    }
    return to_string(sum);
}