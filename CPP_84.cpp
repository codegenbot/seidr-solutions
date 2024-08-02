string solve(int N){
    int sum = 0;
    string result = "";
    while(N > 0) {
        if(N % 2 == 1)
            sum++;
        N /= 2;
    }
    for(int i = 0; i < sum; i++) {
        result += "1";
        for(int j = 1; j <= (10 - sum); j++)
            result += "0";
    }
    return result;
}