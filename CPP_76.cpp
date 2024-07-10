bool is_simple_power(int x, int n) {
    double log_result = log((double)x) / log((double)n);
    return (log_result == round(log_result));
}

int main() {
    assert(is_simple_power(1, 12) == true); 
    return 0;
}