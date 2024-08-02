string solve(int N){
    int sum = 0;
    while(N > 0) {
        int remainder = N % 2;
        sum += remainder;
        N /= 2;
    }
    string binary = "";
    while(sum > 0) {
        int temp = sum % 2;
        if(temp == 1)
            binary.insert(0,"1");
        else
            binary.insert(0,"0");
        sum /= 2;
    }
    return binary;
}