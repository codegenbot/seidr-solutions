int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return bitset<sizeof(int) * CHAR_BIT>(sum).to_string();
}