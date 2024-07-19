string binarySum = "";
    while (N > 0) {
        int digit = N % 2;
        binarySum = to_string(digit) + binarySum;
        N /= 2;
    }
    return binarySum;
}