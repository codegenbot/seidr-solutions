string solve(int N){
    int sum = 0;
    while(N > 0) {
        sum += (N & 1);
        N >>= 1;
    }
    string result = "";
    while(sum > 0) {
        if(sum & 1)
            result.push_back('1');
        else
            result.push_back('0');
        sum >>= 1;
    }
    reverse(result.begin(), result.end());
    return result;
}