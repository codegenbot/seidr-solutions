Here is the completed code:

bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 0.0001) return true;
    if (abs(b - (a + c)) < 0.0001) return true;
    if (abs(c - (a + b)) < 0.0001) return true;
    return false;
}