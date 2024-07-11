int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return bitset<sizeof(int)*8>(sum).to_string().substr(sizeof(int)*8-1);