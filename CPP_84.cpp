string solve(int N){
    int sum = 0;
    while(N > 0) {
        if(N % 2 == 1)
            sum += 1;
        N /= 2;
    }
    string result = "";
    while(sum > 0) {
        result = (sum % 2 == 1)? "1" + result : "0" + result;
        sum /= 2;
    }
    return result;
}