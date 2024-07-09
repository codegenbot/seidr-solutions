string solve(int N) {
    int sum = 0;
    string binary = "";
    while (N > 0) {
        int remainder = N % 2;
        if (remainder == 1) {
            sum++;
        }
        N /= 2;
        binary = to_string(remainder) + binary;
    }
    return binary;
}