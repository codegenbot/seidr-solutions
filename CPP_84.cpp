string solve(int N){
    int sum = 0;
    while(N > 0) {
        sum += N % 2;
        N /= 2;
    }
    string result = "";
    while(sum > 0) {
        if(sum % 2 == 1)
            result = "1" + result;
        else
            result = "0" + result;
        sum /= 2;
    }
    return result;
}