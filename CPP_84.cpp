string solve(int N){
    int sum = 0;
    while(N > 0) {
        int remainder = N % 2;
        sum += remainder;
        N /= 2;
    }
    string result = "";
    if(sum == 0) return "0";
    while(sum > 0) {
        int temp = sum % 2;
        if(temp == 1) result = to_string(temp) + result;
        sum /= 2;
    }
    return result;
}