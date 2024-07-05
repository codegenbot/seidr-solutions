bool any_int(float a, float b, float c) {
    if (floor(a) != a || floor(b) != b || floor(c) != c) return false;
    return (a == b + c) || (b == a + c) || (c == a + b);
}