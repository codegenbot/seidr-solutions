string solve(int N){
    int sum = 0;
    while(N > 0) {
        int remainder = N % 2;
        sum += remainder;
        N /= 2;
    }
    return toBinaryString(sum);
}

string toBinaryString(int n) {
    string str = "";
    while(n > 0) {
        if(n % 2 == 0)
            str = "0" + str;
        else
            str = "1" + str;
        n /= 2;
    }
    return str;
}