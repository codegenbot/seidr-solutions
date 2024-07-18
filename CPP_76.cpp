bool is_simple_power(int x, int n) {
    if(x == 1) return true;
    if(n == 1) return false;
    
    double result = log(static_cast<double>(x)) / log(static_cast<double>(n));
    return (result == static_cast<int>(result));
}