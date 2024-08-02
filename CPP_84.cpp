string solve(int N) {
    int sum = 0;
    string binStr = "";
    while(N > 0) {
        if(N % 2 == 1)
            sum += 1;
        binStr = (char)(N % 2 + '0') + binStr;
        N /= 2;
    }
    return binStr;
}