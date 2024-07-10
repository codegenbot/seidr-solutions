bool is_simple_power(int x, int n){
    return round(pow(n, (int)log(x)/log(n))) == x;
}