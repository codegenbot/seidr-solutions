bool is_simple_power(int x, int n){
    double y = cbrt(x);
    return round(y) == n;
}