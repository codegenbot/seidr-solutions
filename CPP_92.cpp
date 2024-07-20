bool any_int(double a, double b, double c) {
    return ((a == int(b + c)) || (b == int(a + c)) || (c == int(a + b))) && (a == int(a) && b == int(b) && c == int(c));
}