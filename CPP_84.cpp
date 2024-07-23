string binarySum = "";
    while (N > 0) {
        binarySum = to_string(N % 2) + binarySum;
        N /= 2;
    }
    return binarySum;
}