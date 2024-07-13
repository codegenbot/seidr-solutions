string solve(int N){
    int sum = 0;
    while(N > 0){
        int remainder = N % 2;
        sum += remainder;
        N /= 2;
    }
    string output = "";
    while(sum > 0){
        int temp = sum % 2;
        output = to_string(temp) + output;
        sum /= 2;
    }
    return output;
}