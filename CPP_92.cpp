Here is the completed code:

bool any_int(float a, float b, float c) {
    if (round(a) == a && round(b) == b && round(c) == c) {
        return (a == b + c) || (b == a + c) || (c == a + b);
    }
    return false;
}