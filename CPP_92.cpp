bool any_int(float a, float b, float c) {
    bool any = false;
    if (a == int(a) && b == int(b) && c == int(c)) {
        any = true;
        return (a == b + c || a == c + b || b == a + c || c == a + b);
    }
    return any;
}