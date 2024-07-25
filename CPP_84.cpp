int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return bitset<15>(sum).to_string().substr(15 - (int)log2(sum));