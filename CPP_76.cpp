bool is_simple_power(int x, int n){
    double y = pow(n, (int)log(x) / log(n));
    return abs(y - x) < 0.0001;
}