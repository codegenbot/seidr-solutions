string solve(int N) {
    string result = "";
    while (N > 0) {
        int digit = N % 2;
        if (digit == 1)
            result.push_back('1');
        else
            result.push_back('0');
        N /= 2;
    }
    reverse(result.begin(), result.end());
    return result;
}