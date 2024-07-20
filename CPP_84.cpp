string solve(int N){
    int sum = 0;
    string result = "";
    while(N > 0) {
        int remainder = N % 2;
        sum += remainder;
        if(remainder == 1)
            result = "1" + result;
        else
            result = "0" + result;
        N /= 2;
    }
    return result;
}