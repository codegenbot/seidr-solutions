int sumDigitsInBinary(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 2;
        num /= 2;
    }
    return sum;
}

string solve(int N) {
    return bitset<32>(sumDigitsInBinary(N)).to_string().substr(32 - 4);
}