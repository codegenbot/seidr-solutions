int sumOfDigitsInBinary(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 2;
        num /= 2;
    }
    return sum;
}

string solve(int N) {
    return bitset<16>(sumOfDigitsInBinary(N)).to_string().substr(16-ceil(log2(sumOfDigitsInBinary(N))));
}