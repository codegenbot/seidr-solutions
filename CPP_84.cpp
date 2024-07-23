int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return bitset<8>(sum).to_string().erase(0, min(bitset<8>(sum).to_string().find_first_not_of('0'), bitset<8>(sum).to_string().size() - 1));
}