string solve(int N){
    int sum = 0;
    string res = "";
    while(N > 0){
        int remainder = N % 2;
        sum += remainder;
        if(remainder == 1)res.push_back('1');
        else res.push_back('0');
        N /= 2;
    }
    return res;
}