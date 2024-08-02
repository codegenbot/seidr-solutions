string solve(int N){
    int sum = 0;
    while(N > 0){
        int remainder = N % 2;
        if(remainder == 1) sum++;
        N /= 2;
    }
    string result;
    for(int i = 0; i < sum; i++){
        result += '1';
    }
    for(int i = 0; i < 4 - sum; i++){
        result += '0';
    }
    return result;
}