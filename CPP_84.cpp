int sum = 0;
    int n = N;
    while (n > 0) {
        sum += n % 2;
        n /= 2;
    }
    return bitset<sizeof(int)*8>(sum).to_string().substr(std::bitset<sizeof(int)*8>(sum).to_string().find('1'));
}