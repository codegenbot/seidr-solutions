string solve(int N) {
    int sum = 0;
    while(N > 0) {
        int digit = N & 1;
        if(digit == 1)
            sum++;
        N >>= 1;
    }
    string result = "";
    while(sum > 0) {
        result = (sum % 2 ? "1" : "0") + result;
        sum /= 2;
    }
    return result;
}