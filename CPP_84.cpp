string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    string binary = "";
    while (sum > 0) {
        if (sum & 1)
            binary.push_back('1');
        else
            binary.push_back('0');
        sum >>= 1;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}