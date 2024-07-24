bool any_int(double a, double b, double c) {
    return ((a == b + c) || (b == a + c) || (c == a + b)) && ((a == (int)a) && (b == (int)b) && (c == (int)c));
}