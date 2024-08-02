Here is the completed code:

long long special_factorial(int n){
    long long res = 1;
    for (int i = n; i > 0; --i) {
        res *= fact(i);
    }
    return res;
}
long long fact(int n){
    long long res = 1;
    for (int i = 2; i <= n; ++i) {
        res *= i;
    }
    return res;
}