int sumOfDigitsInBinary(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 2;
        n /= 2;
    }
    return sum;
}

string solve(int N) {
    int sum = sumOfDigitsInBinary(N);
    return bitset<sizeof(int)*8>(sum).to_string();
}