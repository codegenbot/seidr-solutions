std::string solve(int N) {
    int count = 0;
    while (N > 0) {
        count += N % 2;
        N /= 2;
    }
    return bitset<32>(count).to_string().substr(32 - count);
}