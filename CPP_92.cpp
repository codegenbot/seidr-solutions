Here is the completed code:

bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 1e-9 && a == round(a) &&
        b == round(b) && c == round(c)) {
        return true;
    }
    return false;
}