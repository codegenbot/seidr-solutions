Here is the completed code:

bool any_int(float a, float b, float c) {
    if (a == static_cast<int>(a)) {
        return a == b + c || a == c + b;
    }
    if (b == static_cast<int>(b)) {
        return b == a + c || b == c + a;
    }
    if (c == static_cast<int>(c)) {
        return c == a + b || c == b + a;
    }
    return false;
}