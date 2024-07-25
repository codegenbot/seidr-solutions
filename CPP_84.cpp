string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    string res = "";
    while (sum > 0) {
        if (sum & 1)
            res.push_back('1');
        else
            res.push_back('0');
        sum >>= 1;
    }
    return res;
}