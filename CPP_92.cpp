Here is the completed code:

bool any_int(float a, float b, float c) {
    if (a == round(a) && b == round(b) && c == round(c)) {
        return (a == b + c || a == c + b || b == a + c);
    }
    return false;
}