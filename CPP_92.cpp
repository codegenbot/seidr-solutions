bool any_int(float a, float b, float c) {
    if (a == int(a) && b == int(b) && c == int(c)) {
        return (a == b + c || a == c + b || a == b - c || a == c - b);
    }
    return false;
}