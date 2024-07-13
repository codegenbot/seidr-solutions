string solve(int N){
    int sum = 0;
    while(N > 0) {
        sum += (N & 1);
        N >>= 1;
    }
    return to_string(sum);
}