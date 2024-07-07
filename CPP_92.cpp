Here is the completed code:

bool any_int(float a, float b, float c) {
    if (round(a) == a && round(b) == b && round(c) == c) {
        return (a == b + c || a == c + b || b == a + c || b == c + a || c == a + b || c == b + a);
    }
    return false;
}