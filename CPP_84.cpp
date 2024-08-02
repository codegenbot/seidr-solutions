string solve(int N) {
    int sum = 0;
    while (N > 0) {
        int remainder = N % 2;
        sum += remainder;
        N /= 2;
    }
    return to_string(sum);
}