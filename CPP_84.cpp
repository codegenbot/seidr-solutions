int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return bitset<sizeof(N) * CHAR_BIT>(sum).to_string();
}