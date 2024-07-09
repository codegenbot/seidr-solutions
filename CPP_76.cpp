bool is_simple_power(int x, int n) {
    double log_value = log(x) / log(n);
    return (log_value == round(log_value));
}

int main() {
    assert(is_simple_power(1, 12)==true);
    // Add your code here...
    return 0;
}