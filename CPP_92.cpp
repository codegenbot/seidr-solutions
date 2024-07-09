bool any_int(float a, float b, float c) {
    return (int(a) == a && (a == b + c || a == b || a == c)) ||
           (int(b) == b && (b == a + c || b == a || b == c)) ||
           (int(c) == c && (c == a + b || c == a || c == b));
}