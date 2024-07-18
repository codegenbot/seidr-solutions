bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    // Find the logarithm
    double result = std::log(x) / std::log(n);
    
    // Check if result is an integer
    return (result == (int)result);
}