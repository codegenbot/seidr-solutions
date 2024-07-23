Here is the completed code:

bool is_simple_power(int x, int n){
    double y = pow(n, log(x) / log(n));
    return round(y) == x;
}