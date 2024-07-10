bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 0.01 && abs(b - (a + c)) < 0.01 && abs(c - (a + b)) < 0.01) {
        return true;
    }
    return false;
}