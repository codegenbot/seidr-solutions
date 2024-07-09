bool is_simple_power(int x, int n) {
    #include <cmath>
    
    if (x <= 0 || n <= 0) {
        return false;
    }
    double result = log(x) / log(n);
    return (result == static_cast<int>(result));
}