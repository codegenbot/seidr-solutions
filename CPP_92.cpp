Here is the completed code:

bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 0.001 && isfinite(a) && isfinite(b) && isfinite(c)) {
        return true;
    }
    return false;
}