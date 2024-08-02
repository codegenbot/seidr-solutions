Here is the completed code:

bool any_int(float a, float b, float c) {
    if (floor(a) == a && floor(b) == b && floor(c) == c) {
        return (a == b + c || a == c + b || b == a + c || b == c + a || c == a + b || c == b + a);
    }
    return false;
}