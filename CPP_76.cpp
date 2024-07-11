bool is_simple_power(int x, int n){
    return pow(n, ceil(log2(x))) == x;