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
    string binaryNum = "";
    while (sum > 0) {
        binaryNum = to_string(sum % 2) + binaryNum;
        sum /= 2;
    }
    return binaryNum;
}