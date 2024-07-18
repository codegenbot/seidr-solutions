bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    if(x == 1)
        return true;
        
    double result = std::log(x) / std::log(n);
    return std::abs(result - static_cast<int>(result)) < 0.0000001;
}