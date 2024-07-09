bool any_int(double a, double b, double c) {
    return (int)a == a && (int)b == b && (int)c == c && (a == b + c || b == a + c || c == a + b);
}