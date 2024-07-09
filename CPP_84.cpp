string solve(int N) {
    int sum = 0;
    while (N > 0) {
        int remainder = N % 2;
        if (remainder == 1)
            sum++;
        N /= 2;
    }
    string result = "";
    while (sum > 0) {
        result = (char)(sum % 2 + '0') + result;
        sum /= 2;
    }
    return result;
}