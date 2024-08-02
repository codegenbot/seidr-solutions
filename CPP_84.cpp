string solve(int N){
    int sum = 0;
    while(N > 0) {
        sum += N & 1;
        N >>= 1;
    }
    return to_binary(sum);
}

string to_binary(int n) {
    string res = "";
    while(n > 0) {
        if(n % 2 == 0)
            res.push_back('0');
        else
            res.push_back('1');
        n /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}