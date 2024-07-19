int sum = 0;
    while (N != 0) {
        sum += N % 2;
        N /= 2;
    }
    return bitset<64>(sum).to_string().substr(64 - sum);