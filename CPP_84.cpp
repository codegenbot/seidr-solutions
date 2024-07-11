string solve(int N) {
    string binary = "";
    while (N > 0) {
        N %= 2 == 1 ? N + 1 : N - 1;
        binary = to_string(N % 2) + binary;
        N /= 2;
    }
    return binary;
}