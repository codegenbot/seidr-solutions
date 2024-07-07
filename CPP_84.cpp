string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return toBinary(sum);
}

string toBinary(int n) {
    string res = "";
    do {
        res = (n & 1) ? "1" + res : "0" + res;
        n >>= 1;
    } while (n);
    return res;
}