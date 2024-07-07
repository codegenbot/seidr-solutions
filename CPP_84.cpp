string solve(int N){
    int sum = 0;
    while(N > 0) {
        if((N & 1) == 1) {
            sum++;
        }
        N >>= 1;
    }
    string result = "";
    while(sum > 0) {
        result += (sum % 2 == 1 ? "1" : "0");
        sum /= 2;
    }
    reverse(result.begin(), result.end());
    return result;
}