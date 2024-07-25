bool any_int(float a, float b, float c) {
    return (a == b + c || a == c + b || b == a + c || b == c + a || c == a + b || c == b + a);
}