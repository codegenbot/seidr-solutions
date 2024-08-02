bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    double power = log(static_cast<double>(x)) / log(static_cast<double>(n));
    
    return (power == static_cast<int>(power));
}

int main() {
    assert(is_simple_power(1, 12)==true);
    return 0;
}