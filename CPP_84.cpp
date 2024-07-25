string solve(int N) {
    while (N > 0) {
        N += N % 2;
        N /= 2;
    }
    return bitset<32>(N).to_string().substr(32 - N);
}